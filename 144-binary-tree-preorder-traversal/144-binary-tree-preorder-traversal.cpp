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
    vector<int> preorderTraversal(TreeNode* root) {
        
        // root , left , right
        
        stack< TreeNode* > stack;
        
        TreeNode* cur = root;
        
        vector<int> ans;
        
        while( cur or stack.size() ){
            
            if(cur){
                stack.push(cur);
                ans.push_back(cur->val);
                cur = cur->left;
            }
            else{
                
                TreeNode* temp = stack.top();
                
                if( temp->right ){
                    cur = temp->right;
                }
                else{
                    stack.pop();
                    while( stack.size() and temp == stack.top()->right ){
                        temp = stack.top();
                        stack.pop();
                    }
                }
            }
        }
        
        return ans;
        
    }
};
