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
        vector<vector< TreeNode* > > nodeList;
public:
    
    Solution(){
        nodeList.resize(50);
    }
    
    void solve( TreeNode* root = NULL , int level = 0 ){
        
        if( root==NULL ){
            return;
        }
        nodeList[level].push_back(root);
        solve( root->left,level+1 );
        solve(root->right,level+1);
    }

    
    TreeNode* reverseOddLevels(TreeNode* root) {
        
        solve( root );
        
        for( int i=0;i<50;i++ ){
            
            if( nodeList[i].size() == 0 ) break;
            if( i % 2 == 0 ) continue;
            
            int l = 0 , r = nodeList[i].size() -1;
            
            while(l<r){
                swap( nodeList[i][l]->val , nodeList[i][r]->val );
                l++; r--;
            }
            
        }
        
        return root;
    }
};

