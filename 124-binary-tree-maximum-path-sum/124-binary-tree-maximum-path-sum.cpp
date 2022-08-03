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
    
    int ans;
    
    int solve(TreeNode* root){
        
        if(root==NULL){
            return 0;
        }
        
        int left = solve(root->left);
        int right = solve(root->right);
        
        int treemax = max( max(left,right) + root->val, root->val );
        int curmax = max( treemax, root->val + left + right );
        ans = max(ans, curmax );
        return treemax;
        
    }
    
    int maxPathSum(TreeNode* root) {
        
        if(root==NULL){
            return 0;
        }
        
        ans = INT_MIN;
        
        solve(root);
        
        return ans;
        
    }
};