/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* iterator = node;
        ListNode* last = NULL;
        while( iterator -> next ){
            swap( iterator->val, iterator->next->val );
            last = iterator;
            iterator=iterator->next;
        }
        
        if(last){
            last -> next = NULL;
        }
        
    }
};


