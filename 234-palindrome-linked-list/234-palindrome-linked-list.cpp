/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    bool ans;
public:
    Solution(){
        ans = true;
    }
    
    ListNode* temp;
    
    void solve( ListNode* head ){
        
        if ( head==NULL ) {
            return;
        }
        
        solve( head->next );
        
        if( head->val != temp->val ){
            ans = false;
            return;
        }
        temp = temp->next;
    }
    
    bool isPalindrome(ListNode* head) {
        
        temp = head;
        solve(head);
        return ans;
    }
};