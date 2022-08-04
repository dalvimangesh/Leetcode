/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* recoverFromPreorder(string s) {
        
        vector<pair<TreeNode*,int> > v;
        
        int n = (int) s.size();
        
        int level = 0;
        
        int i = 0;
        
        while(i<n){
            
            int curnum = 0;
            
            while( i<n and s[i] != '-' ){
                curnum = curnum*10 + (s[i] - '0');
                i++;
            }
            
            TreeNode* node = new TreeNode(curnum);
            
            v.push_back( { node, level } );
            
            level = 0;
            while(i<n and s[i]=='-'){
                level++; 
                i++;
            }
            
        }
        
        for(int i=1; i < v.size() ;i++){
            
            for(int j=i-1;j>=0;j--){
                
                if( v[i].second > v[j].second ){
                    
                    if( v[j].first->left == NULL ){
                        v[j].first->left = v[i].first;
                    }
                    
                    else {
                        v[j].first->right = v[i].first;
                    }
                    break;
                }
                
            }
            
        }
        
        return v[0].first;      
    }
};





