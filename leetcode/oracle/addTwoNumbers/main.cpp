
// * Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        int c=0;
        ListNode* head;
        ListNode* ans=head;
        while((temp2!=NULL)&&(temp1!=NULL)){
                c=temp1->val+temp2->val+c;
                ans->next=new ListNode(c%10);
                c/=10;
            temp1=temp1->next;
            temp2=temp2->next;
            ans=ans->next;
        }
        while(temp2!=NULL){
             c=temp2->val+c;
                ans->next=new ListNode(c%10);
                c/=10;
            //temp1=temp1->next;
            temp2=temp2->next;
                        ans=ans->next;

        }
        while(temp1!=NULL){
             c=temp1->val+c;
                ans->next=new ListNode(c%10);
                c/=10;
            //temp1=temp1->next;
            temp1=temp1->next;
            ans=ans->next;
        }
        return head->next;

    }
};