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
public:
    
    ListNode* reverse( ListNode* head ){
        if( head->next == NULL ){
            return head;
        }
        ListNode* temp = reverse( head -> next );
        head->next->next=head;
        head->next=NULL;
        return temp;
    }
    
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow = head, *fast = head;
        
        while( fast != NULL and fast ->next != NULL ){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* rev = reverse(slow);
        
        while( head and rev ){
            if( head->val != rev->val ){
                return false;
            }
            head = head->next;
            rev = rev->next;
        }
        return true;
    }
};
