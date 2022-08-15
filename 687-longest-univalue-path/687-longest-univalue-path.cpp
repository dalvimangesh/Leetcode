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
    int ans;
public:
    
    Solution(){
        ans = 1;
    }
    
    int solve( TreeNode* root ) {
        
        if( root == NULL ) {
            return 0;
        }
        
        int left = solve(root->left);
        
        int right = solve(root->right);
        
        int val = 0;
        
        int mx = 0;
        
        if(  (root->left) and ( (root-> val) == (root->left->val)  ) ) {
            
            val += left;
            
            mx = max(mx,left);
            
            
        }
        
        if( (root->right) and  ( (root->val) == (root->right->val) ) ) {
            
            val += right;
            
            mx = max(mx,right);
            
        }
        
        ans = max(val+1,ans);
        
        return (mx + 1);
        
    }
    
    int longestUnivaluePath(TreeNode* root) {
        
        solve(root);
        
        return ans-1;
        
    }
};


