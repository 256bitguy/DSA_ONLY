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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head,*prev=NULL;
        int m=0,cnode=0;
         if(!head)
        {
            return NULL;
        }
        if(head->next==NULL&&n==1)
        {
            return NULL;
        }
        while(temp->next!=NULL)
        {
            temp=temp->next;
            m++;
        }
        cnode=m-n+1;
      //  cout<<cnode;
     if(cnode==0)
        {
            head=head->next;
             return head;
        }
        temp=head;
        while(cnode--)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete(temp); 
        return head;
        
    }
};
