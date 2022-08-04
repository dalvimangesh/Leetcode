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
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL){
            return NULL;
        }
        
        // cout << head->val << endl;
        
        int cnt = 0;
        
        ListNode* temp = head;
        
        while( head and cnt<k ){
            head = head->next;
            cnt++;
        }
        
        if(cnt<k) {
            return temp;
        }
        
        ListNode *cur=temp,*prev = NULL;
        
        cnt = 0;
        
        while( cnt < k){
            ListNode* n = cur->next;
            cur -> next = prev;
            prev = cur;
            cur = n;
            cnt++;
        }
        
        temp->next = reverseKGroup( cur, k );
        
        return prev;
           
    }
};


