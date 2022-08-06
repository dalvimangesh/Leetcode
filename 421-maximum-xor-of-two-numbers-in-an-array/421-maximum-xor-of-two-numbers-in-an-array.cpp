class node{
public:
    node *left, *right;
    node(){
        left = right = NULL;
    }    
};

class trie{
public:
    node* root;
    
    trie() {
        root = new node();
    }
    
    void insert( int num ) {
        
        node* temp = root;
        
        for(int i=31;i>=0;i--) {
            
            int bit = ( ( num >> i ) & 1 );
            
            if( bit ) {
                if( temp -> right ){
                    temp = temp->right;
                }
                else{
                    node* n = new node();
                    temp->right = n;
                    temp = n;
                }
            }
            
            else{
                 
                if( temp->left ) {
                    temp = temp->left;
                }
                
                else {
                    node* n = new node();
                    temp->left = n;
                    temp = n;
                }
                
            }
        }   
    }
    
    int get(int num ) {
        
        int ans = 0;
        
        node* temp = root;
        
        for(int i=31;i>=0;i--){
            
            int bit = ( ( num >> i ) & 1);
            
            if( temp == NULL ) {
                return ans;
            }
            
            if( bit ){
                if( temp->left ){
                    ans = ( ans | ( 1 << i ) );
                    temp = temp->left;
                }
                else{
                    temp = temp->right;
                }
            }
            
            else {
                
                if( temp->right ){
                    ans = ( ans | ( 1 << i) );
                    temp = temp->right;
                }
                else{
                    temp = temp->left;
                }
            }
            
        }
        
        return ans;
    }
    
};

class Solution {
public:
    
    int findMaximumXOR(vector<int>& nums) {
        
        trie obj;
        
        int ans = 0;
        
        // obj.insert(nums[0]);
        
        int n = (int) nums.size();
        
        for(int i=0;i<n;i++){
            
            int temp = obj.get(nums[i]);
            ans = max(ans,temp);
            obj.insert(nums[i]);
            
        }
        
        return ans;
        
    }
};