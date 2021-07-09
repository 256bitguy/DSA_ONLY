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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head  || (head->next==NULL && head->val==val))
        {
            return NULL;
        }
       
         
       
        while(head->val==val)
        {
            head=head->next;
            if(head->next==NULL && head->val==val )
                return   NULL;
        }
        ListNode *temp=head,*prev=NULL;
        
        while(temp!=NULL)
        {if(temp->val==val)
        {
            prev->next=temp->next; 
            temp=prev->next;
            continue;
        }
              
         prev=temp;
            temp=temp->next;
           
        }
        return head;
    }
};
