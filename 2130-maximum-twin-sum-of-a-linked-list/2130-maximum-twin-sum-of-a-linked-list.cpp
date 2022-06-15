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
    
    int lengthOfList(ListNode* head){
        if(head == NULL)
            return 0;
        
        return 1 + lengthOfList(head->next);
    }
    
    int pairSum(ListNode* head) {
        int length = lengthOfList(head);
        stack<int> x;
        int mid = length/2;
        
        while(mid--)
        {
            x.push(head->val);
            head= head->next;
        }
        int ans = -1;
        int sum;
        while(head)
        {
            sum = head->val + x.top();
            
            ans = max(ans,sum);
            x.pop();
            head = head->next;
        }
        
        return ans;
    }
};