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
    
    int ans = 0;
    
    int solve(TreeNode* root){
        
        if(root==NULL) return 0;
        
        int l  = 0, r = 0;
        if(root->left){
            l = 1 + solve(root->left);
        }
        if(root->right){
            r = 1 + solve(root->right);
        }
        
        int val = l + r;
        
        ans = max(val,ans);
        
        return max(l,r);
        
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        solve(root);
        
        return ans;
    }
};





