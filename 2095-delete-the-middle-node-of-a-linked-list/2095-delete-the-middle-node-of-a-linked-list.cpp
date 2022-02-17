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
    ListNode* deleteMiddle(ListNode* head) {
        int n = 0;
        ListNode* temp = head;
        ListNode* start = new ListNode();
        start->next = head;
        while(temp != NULL)
        {   
            temp = temp->next;
            n++;
        }
        if(n == 1)
            return NULL;
        n = n/2;
        
        while(n != 0)
        {
            start = start->next;
            n--;
        }
        
        start->next = start->next->next;
        
        return head;
        
    }
};