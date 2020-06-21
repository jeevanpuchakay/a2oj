#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *insertNode(node *head, int x)
{
    node *newNode = new node;
    newNode->next = head->next;
    head->next = newNode;
    newNode->data = x;
    return newNode;
}

node *add(node *head1, node *head2)
{
    node *temp1, *temp2;
    temp1 = head1->next;
    temp2 = head2->next;
    node *ans = new node;
    int c = 0;
    ans->next = NULL;
    node *dupAns = ans;
    while (temp2 != NULL && temp1 != NULL)
    {
        c += temp2->data + temp1->data;
        node *trans = new node;
        trans->data = c % 10;
        c /= 10;
        trans->next = dupAns->next;
        dupAns->next = trans;
        dupAns = trans;
        temp2 = temp2->next;
        temp1 = temp1->next;
    }

    while (temp2 != NULL)
    {
        c += temp2->data;
        node *trans = new node;
        trans->data = c % 10;
        c /= 10;
        trans->next = dupAns->next;
        dupAns->next = trans;
        dupAns = trans;
        temp2 = temp2->next;
    }
    while (temp1 != NULL)
    {
        c += temp1->data;
        node *trans = new node;
        trans->data = c % 10;
        c /= 10;
        trans->next = dupAns->next;
        dupAns->next = trans;
        dupAns = trans;
        temp1 = temp1->next;
    }
    while(c){
        node *trans = new node;
        trans->data = c % 10;
        c /= 10;
        trans->next = dupAns->next;
        dupAns->next = trans;
        dupAns = trans;
    }
    return ans;
}
node* substract(node* head1,node* head2){

    node *temp1, *temp2;
    temp1 = head1->next;
    temp2 = head2->next;
    node *ans = new node;
    int c = 0;
    ans->next = NULL;
    node *dupAns = ans;
    while(temp2!=NULL){
        int operation=temp1->data - temp2->data - c;
        if(operation>=0){
            node *newNode= new node;
            newNode->data=operation;
           newNode->next=dupAns->next;
            dupAns->next=newNode;
            c=0;
            dupAns=dupAns->next;
        }
        else{
            node *newNode= new node;
            newNode->data=operation+10;
           newNode->next=dupAns->next;
            dupAns->next=newNode;
            c=01;
            dupAns=dupAns->next;
        }
        temp2 = temp2->next;
        temp1 = temp1->next;
    }
    return ans;
}
node* multiply(node* head1,node* head2,int n1,int n2){
    node *temp1, *temp2;
    temp1 = head1->next;
    temp2 = head2->next;
    node *ans = new node;
    int c = 0;
    ans->next = NULL;
    node *dupAns = ans;
    int digit=0;
    while(temp1!=NULL){
        
    }

}
int main()
{
    int n1; //number of digits in number 1
    int n2; //number of digits in number 2
    //For simplicity sake we assume n1>=n2
    node *head1 = new node;
    node *head2 = new node;
    head1->next = head2->next = NULL;
    int x;
    //    cin>>x;
    cin>>n1>>n2;
    for (int i = 0; i < n1; i++)
    {
        cin >> x;
        insertNode(head1, x);
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> x;
        insertNode(head2, x);
    }
    node* addAns=add(head2,head1);
    while(addAns->next!=NULL)
    {
        cout<<addAns->next->data<<" ";
        addAns=addAns->next;
    }
    return 0;
}
