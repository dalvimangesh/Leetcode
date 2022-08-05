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
    
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> ans;
        TreeNode* cur = root;
        stack<TreeNode*> stack;
        
        while( cur or stack.size() ){
            
            if(cur){
               stack.push(cur);
                cur = cur->left;
            }
            else{
                
                TreeNode* temp = stack.top();
                
                if( temp->right ){
                    ans.push_back( temp->val );
                    cur = temp -> right;
                }
                else{
                    ans.push_back(temp->val);
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