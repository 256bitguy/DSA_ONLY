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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
        {
            return NULL;
        }
         
        ListNode *fastptr=head,*slowptr=head;
        int iscycle=0;
        while(fastptr&&slowptr&&fastptr->next)
        {
            fastptr=fastptr->next->next;
            slowptr=slowptr->next;
            if(slowptr==fastptr)
            {
                iscycle=1;
                slowptr=head;
                break;
            }
        }
        if(iscycle)
        {
           
            while(slowptr!=fastptr)
            {  fastptr=fastptr->next;
            slowptr=slowptr->next;
            }
            return  slowptr;
        }
         
        return NULL;
        
    }
};
