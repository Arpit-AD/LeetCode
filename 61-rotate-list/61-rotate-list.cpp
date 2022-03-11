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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return NULL;
        if(!head->next) return head;
		
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = head;
        int sz = 0;
        while(temp)
        {
            temp = temp->next;
            sz++; // SIZE OF LIST
        }
        k = (k>=sz) ? k%sz : k;  
        while(k--)
        {
            fast = fast->next; // ADVANCE BY K UNITS
        }
        while(fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        fast->next = head;
        head = slow->next;
        slow -> next = NULL;
        return head;
    }
};