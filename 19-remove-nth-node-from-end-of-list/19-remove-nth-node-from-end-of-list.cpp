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
    int lengthOfNode(ListNode* head)
    {
        if(head == NULL)
        {
            return 0;
        }
        return 1 + lengthOfNode(head->next);
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = lengthOfNode(head);
        ListNode* temp = head;
        int k = size - n;
        if(k == 0)
            return head->next;
        else {
            while(k != 1)
            {
                temp = temp->next;
                k--;
            }
            temp->next = temp->next->next;
        }
        return head;
    }
};