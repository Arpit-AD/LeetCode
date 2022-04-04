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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp = head, *first = head, *last = head;
        while(--k)
        {
            first = first->next;
            temp = temp-> next;
        }
        while(temp->next)
        {
            last = last-> next;
            temp = temp->next;
        }
        int p = first->val;
        first->val = last->val;
        last->val = p;
        return head;
        
    }
};