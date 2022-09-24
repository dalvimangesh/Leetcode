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
    
    map< pair<TreeNode*,bool>, int > dp; 
    
public:
    
    using intl = long long;
    
    intl solve( TreeNode* root, bool available = true ){
        
        if( root == NULL ){
            return 0LL;
        }
        
        if( dp.find( { root, available } ) != dp.end() ){
            return dp[{root,available}];
        }
        
        intl ans = 0LL;
        
        if( available == false ){
            ans = solve( root->left, true ) + solve( root->right, true );
        }
        else{
            ans =  root->val +  solve( root->left, false ) + solve( root->right, false );
            ans = max(ans, solve( root->left, true ) + solve( root->right, true ) );
        }
        return dp[{root,available}] = ans;
    }
    
    int rob(TreeNode* root) {
        return solve(root);
    }
};

