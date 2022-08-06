class node{
public:
    char val;
    node* child[26];
    bool terminal;
    node(char c){
        val = c;
        terminal = false;
        for(int i=0;i<26;i++) child[i] = NULL;
    }
    
};

class Trie {
public:
    
    node* root;
    
    Trie() {
        
        root = new node('\0');
        
    }
    
    void insert(string word) {
        
        node* temp = root;
        
        for( char c : word ){
            
            if( temp->child[ c - 'a' ]) {
                
                temp = temp->child[ c - 'a' ];
                
            }
            else {
                
                node* n = new node(c);
                temp->child[ c - 'a' ] = n;
                temp = n;
                
            }
        }
        
        temp->terminal = true;
        
    }
    
    bool search(string word) {
        
        node *temp = root;
        
        for( char c: word ){
            
            if( temp->child[c-'a'] ){
                
                temp = temp->child[c-'a'];
                
            }
            
            else {
                return false;
            }
            
        }
        return temp->terminal;
        
    }
    
    bool startsWith(string prefix) {
        
        node* temp = root;
        
        for(char c:prefix){
            
            if( temp->child[c - 'a'] ){
                temp = temp->child[c-'a'];
            }
            else{
                return false;
            }
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */




















