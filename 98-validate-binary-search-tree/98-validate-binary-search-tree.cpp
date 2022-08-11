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

    bool solve(TreeNode* root, long long l, long long r ) {
        
        if( root == NULL ) {
            return true;
        }
        
        if(  (1LL * root->val <= l) or (1LL * root->val >= r)  ) {
            return false;
        }
        
        bool left = solve( root->right ,  max( { 1LL * root->val, l } ) , r );
        
        bool right = solve( root->left , l , min( { 1LL * root->val, r } ));
        
        return (left and right);
    }
    
    
    bool isValidBST(TreeNode* root) {
        
        return solve( root, (long long) INT_MIN + INT_MIN, (long long) INT_MAX + INT_MAX);
        
    }
};