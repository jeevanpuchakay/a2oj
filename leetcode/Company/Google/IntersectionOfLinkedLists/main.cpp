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
        if((headA==NULL)||(headB==NULL))return NULL;
        ListNode* h1=headA,*h2=headB,*last=NULL;
        while(true){
            if(h1==h2)return h1;
            if(h1->next==NULL){
                if(last==NULL)last=h1;
                else if(h1!=last){return NULL;}
                h1=headB;
            }else{
                h1=h1->next;
            }
            if(h2->next==NULL){
                if(last==NULL)last=h2;
                else if(h2!=last){return NULL;}
                h2=headA;                
            }else{
                h2=h2->next;
            }
            
        }
    }
};