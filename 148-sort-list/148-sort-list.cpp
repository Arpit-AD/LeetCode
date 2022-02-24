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
    ListNode* sortList(ListNode* head) {
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        vector<int> x;
        while(temp1 != NULL)
        {
            int k = temp1->val;
            temp1 = temp1->next;
            x.emplace_back(k);
        }
        sort(x.begin(),x.end());
        int i = 0;
        while(temp2 != NULL)
        {
            temp2->val = x[i];
            i++;
            temp2 = temp2->next;
        }
        return head;
    }
};