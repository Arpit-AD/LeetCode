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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* A_pointer = headA;
        ListNode* B_pointer = headB;
        
        while(A_pointer != B_pointer)
        {
            if(A_pointer == NULL)
            {
                A_pointer = headB;
            } 
            else {
               A_pointer= A_pointer->next;
            }
            if(B_pointer == NULL)
            {
                B_pointer=headA;
            } 
            else {
                B_pointer=B_pointer->next;
            }
        }
        return B_pointer;
    }
};