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
    ListNode* reverseLL(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
       return prev;
    }
    
    
    bool isPalindrome(ListNode* head) {
      
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;// 1 2 2 1
        }
        slow = reverseLL(slow);
        
        // slow = slow->next;// 1 2 3 && 1 2    1 2 3 2 1
        
        while(head)
        {
            if(head->val != slow->val)
                return false;
            head = head->next;
            slow = slow->next;
            
        }
        
        return true;
    }
};