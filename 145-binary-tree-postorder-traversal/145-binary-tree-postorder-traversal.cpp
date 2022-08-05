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
    vector<int> postorderTraversal(TreeNode* root) {
        
        
        stack < TreeNode* > stack;
        
        vector<int> ans;
        
        TreeNode* cur = root;
        
        while(cur or stack.size() ){
            
            while(cur){
                if(cur->right){
                    stack.push(cur->right);
                }
                stack.push(cur);
                cur = cur->left;
            }
            
            cur = stack.top(); stack.pop();
            
            if( cur->right and stack.size() and cur->right == stack.top() ){
                stack.pop();
                stack.push(cur);
                cur = cur->right;
            }
            else{
                ans.push_back(cur->val);
                cur=NULL;
            }
        }        
        
        
        return ans;
        
    }
};
