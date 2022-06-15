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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        ListNode* tail1 = list1;
        ListNode* tail2 = list2;
        while(tail2->next)
        {
            tail2 = tail2->next;
        }
        int k = 1;
        while(k != a)
        {
            tail1 = tail1->next;
            k++;
        }
        
        k = -1;
        while(k != b)
        {
            head1= head1->next;
            k++;
        }
        
         tail1->next = head2;        
        tail2->next = head1;
        
        return list1;
    }
};