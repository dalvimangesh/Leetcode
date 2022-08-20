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
    int i;
public:
    
    Solution(){
        i = 0;
    }
    
    TreeNode* solve( const vector<int> &preorder , int ub ) {
        
        if( ( i == (int) preorder.size() ) or  preorder[i] > ub ){
            return NULL;
        }
        
        int val = preorder[i++];
        
        TreeNode* cur = new TreeNode( val );
        
        cur->left = solve( preorder, val );
        cur->right = solve(preorder, ub);
        return cur;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        return solve(preorder, INT_MAX);
        
    }
};