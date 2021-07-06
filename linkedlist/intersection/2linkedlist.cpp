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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *headb2=headB,*tempA=headA,*tempB=headB;
        if( headA==NULL||headB==NULL )
        {
            return NULL;
        }
        
        while(tempA!=NULL)
        {
             
            tempB=headb2;
             if(tempA==tempB)
                {
                    return tempA;
                }
               else if(tempA==tempB->next)
                {
                    return tempA;
                }
            while(tempB->next!=NULL )
            {
                if(tempA==tempB)
                {
                    return tempA;
                }
                if(tempB->next==tempA->next )
                {
                    return tempA->next;
                }
                   tempB=tempB->next;  
            }
           tempA=tempA->next;
           }
            
        return  NULL;
    }
};
