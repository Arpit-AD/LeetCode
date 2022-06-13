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
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        while(list1 && list2)
        {
            if(list1->val < list2->val)
            {
                temp->next = list1;
                list1 = list1->next;
                temp= temp->next;
            }
            else{
                temp->next = list2;
                list2= list2->next;
                temp= temp->next;
            }
        }
        
        while(list1){
            temp->next = list1;
            list1= list1->next;
            temp= temp->next;
        }
        
        while(list2)
        {
            temp->next = list2;
            list2 = list2->next;
            temp= temp->next;
        }
        
        return head->next;
    }
    
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0)
            return NULL;
        if(lists.size() == 1)
            return lists[0];
        
        priority_queue<ListNode*> x;
        for(auto it = lists.begin(); it != lists.end(); it++)
        {
            x.push(*it);
        }
        while(x.size() != 1)
        {
            ListNode* temp_1 = x.top();
            x.pop();
            ListNode* temp_2 = x.top();
            x.pop();
            ListNode* merged_list = mergeTwoLists(temp_1, temp_2);
            x.push(merged_list);
            if(x.size() == 1)
                break;
        }
        ListNode* ans = x.top();
        
        return ans;
        
            
    }
};