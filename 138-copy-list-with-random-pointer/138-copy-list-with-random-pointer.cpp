/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
         if(!head)
            return NULL;
        
        unordered_map<Node*,Node*> m;
        
        Node *h,*t1,*t2;
        t1=new Node(0);
        h=t1;  
        t2=head;
        
        while(t2)
        {
            t1->next=new Node(t2->val);
            t1=t1->next;
            m[t2]=t1;
            t2=t2->next;
        }
        
        t2=head;
        t1=h->next;
        
        while(t2)
        {
            if(t2->random)
                t1->random=m[t2->random];
            else
                t2->random=NULL;
            
            t1=t1->next;
            t2=t2->next;
        }
        
        return h->next;
    }
};