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
    
    TreeNode* solve( int s, int e, const vector<int> &nums ){
        
        if( s > e ){
            return NULL;
        }
        
        if( s == e ){
            TreeNode* temp = new TreeNode( nums[s] );
            return temp;
        }
        
        int mid = (s+e)/2;
        
        TreeNode* left = solve( s, mid-1, nums );
        TreeNode* right = solve(mid+1 , e, nums);
        
        TreeNode* temp = new TreeNode(nums[mid]);
        temp->right = right;
        temp->left = left;
        
        return temp;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(0, nums.size()-1, nums);
    }
};

