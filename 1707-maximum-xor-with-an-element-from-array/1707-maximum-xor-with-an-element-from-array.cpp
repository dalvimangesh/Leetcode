bool cmp( const vector<int> &a, const vector<int> &b ){
    
    if( a[1] < b[1] ) return true;
    
    return false;
}

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
    
    void insert(int num) {
        
        node* temp = root;
        
        for(int i=31;i>=0;i--) {
            int bit = ( (num>>i) & 1LL );
            
            if(bit){
                if( temp->right == NULL ) {
                    temp->right = new node();
                }
                temp = temp->right;
            }
            else {
                if( temp->left == NULL ){
                    temp->left = new node();
                }
                temp = temp->left;
            }
        }    
    }
    
    int get(int num) {
        
        int ans = 0;
        node* temp = root;
            
        for(int i=31;i>=0;i--){
            
            if( temp == NULL ) {
                return -1;
            }
            
            int bit = ( ( num >> i ) & 1LL);
            
            if(bit){
                if(temp->left){
                    ans = ( ans | (1LL << i) );
                    temp = temp->left;
                }
                else{
                    temp = temp->right;
                }
            }
            else {
                
                if(temp->right) {
                    ans = ( ans | ( 1LL << i ) );
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
    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        
        int n = (int) nums.size();
        int m = (int) queries.size();
        
        trie trie;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<m;i++){
            queries[i].push_back(i);
        }
        
        sort(queries.begin(),queries.end(),cmp);
        
        int i = 0, j = 0;
        
        vector< int > ans(m) ;
        
        while( ( j < m )  ){
            
            while( i<n and nums[i] <= queries[j][1] ){
                trie.insert(nums[i]); 
                i++;
            }
            
            int val = trie.get( queries[j][0] );
            
            ans[ queries[j][2] ] = val;
                
            j++;
            
        }
        
        return ans;
        
    }
};
