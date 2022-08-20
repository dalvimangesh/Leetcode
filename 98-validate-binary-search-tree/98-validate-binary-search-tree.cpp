/* 
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
        
        if( ( (long long) root->val >= r) or ( (long long) root->val <= l) ){
            return false;
        }
        
        return solve( root->left, l, root->val ) and solve( root->right, root->val, r );
        
    }
    
    
    bool isValidBST(TreeNode* root) {
        
        return solve( root, LONG_MIN , LONG_MAX );
        
    }
};

