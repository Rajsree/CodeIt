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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(!head) return head;
        
        ListNode* t= head;
        ListNode* cur = head->next;
        int prev = head->val;
        while(cur) {
            if(prev !=cur->val) {
                t->next = cur;
                prev = cur->val;
                t = t->next;
            }
            cur = cur->next;
        }
        t->next = NULL;
        return head;
    }
};