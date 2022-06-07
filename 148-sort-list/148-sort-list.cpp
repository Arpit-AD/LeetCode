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
    ListNode* mergeSortedLL(ListNode* list1, ListNode* list2)
    {
        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        while(list1 && list2)
        {
            if(list1->val < list2->val)
            {
                temp->next = list1;
                list1 = list1-> next;
                temp = temp->next;
            }
            else
            {
                temp->next = list2;
                list2 = list2-> next;
                temp = temp->next;
            }
        }
        while(list1)
        {
            temp->next = list1;
                list1 = list1-> next;
                temp = temp->next;
        }
        while(list2){
            temp->next = list2;
                list2 = list2-> next;
                temp = temp->next;
        }
        return head->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second_part = slow->next;
        slow->next = NULL;
        ListNode* first_part = head;
        
        ListNode* sorted_first_part = sortList(first_part);
        ListNode* sorted_second_part = sortList(second_part);
        
        return mergeSortedLL(sorted_first_part,sorted_second_part);
        
    }
};