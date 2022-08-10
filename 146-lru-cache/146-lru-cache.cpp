struct node{
    int val;
    int key;
    node *prev;
    node* next;
    node(int val, int key){
        prev = NULL;
        next = NULL;
        this->val = val;
        this->key = key;
    }
};

class LRUCache {
    node *head, *tail;
    int capacity;
    int cur;
    map<int,node*> pos;
public:
    
    LRUCache(int capacity) {
        this->capacity = capacity; 
        this->cur = 0;
        head = new node(0,0);
        tail = new node(0,0);
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        
        if( pos.find(key) == pos.end() ){
            return -1;
        }
        
        node* temp = pos[key];
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        head->next->prev = temp;
        temp->next = head->next; 
        head->next = temp;
        temp->prev = head;
        
        return temp->val;
        
    }
    
    void put(int key, int value) {
        
        if( pos.find(key) != pos.end() ){
            
            node* temp = pos[key];
            temp->val = value;
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            head->next->prev=temp;
            temp->next = head->next;
            temp->prev = head;
            head->next = temp;
            
        }
        
        else if( cur < capacity ){
            
            node *temp = new node(value, key);
            pos[key] = temp;
            head->next->prev = temp;
            temp->next = head->next;
            temp->prev = head;
            head->next = temp;
            cur++;
            
        }
        
        else{
            
            node* temp = tail->prev;    
            temp->prev->next = tail;
            tail->prev = temp->prev;
            pos.erase(temp->key);
            delete temp;
            
            node* temp1 = new node(value, key);
            pos[key] = temp1;
            head->next->prev = temp1;
            temp1->next = head->next;
            temp1->prev = head;
            head->next = temp1;
            
        }
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

