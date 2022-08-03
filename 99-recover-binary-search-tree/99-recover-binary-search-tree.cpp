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
    void solve(TreeNode* root, TreeNode** first, TreeNode** mid, TreeNode** last, TreeNode** prev ){
        
        if(root==NULL) return;
        
        solve(root->left,first,mid,last,prev);
        
        if((*prev)!=NULL and (*prev)->val > root->val){
            
            if((*first)==NULL){
                *first = *prev;
                *mid = root;
            }
            else{
                *last = root;
            }
        }
        
        *prev = root;
        
        solve(root->right, first, mid, last, prev);
        
    }
    
    
    void recoverTree(TreeNode* root) {
        
        TreeNode *first=NULL,*mid=NULL,*last=NULL,*prev=NULL;
        
        solve(root,&first,&mid,&last,&prev);
        
        if(first and last){
            swap( first->val, last->val );
        }
        else if(mid){
            swap(first->val,mid->val);
        }
        
    }
};