//JeevanReddy
//180001039
//assignment-3
//question-1


#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    int power;
    node* next;
};
int n,m;
//(n,m) are highest power's of first and second polynomial's respectively

// Insertion at the front
void insertAtTheFront(int x, node *head,int p) {
    node *newnode = new node;
    newnode->next = head->next;
    newnode->data = x;
    newnode->power=p;
    head->next = newnode;
}
//adding the coefficient to the result list;
void addcoef(int p,int coef,node* head){
    if((head->next->power)==p) {
        int a=head->next->data;
        a+=coef;
        head->next->data=a;
        return;
    }else{
        addcoef(p,coef,head->next);
    }

}

//multiplication and printing the polynmial
void multiply(node* nHead,node* mhead,node* resulHead){
    node* temp1=nHead->next;
    node* temp2=mhead->next;
    while (temp1!=NULL){
        while(temp2!=NULL){
            int totpower=(temp1->power)+(temp2->power);
            int coefnt=(temp1->data)*(temp2->data);
            //cout<<totpower<<" "<<coefnt;
            addcoef(totpower,coefnt,resulHead);
            temp2=temp2->next;
        }
        temp2=mhead->next;
        temp1=temp1->next;
    }
    return;
}
int main() {
    int a;
    cin>>n>>m;
    node* nhead=new node;//head of co-efficients of first polynomial
    nhead->next=NULL;
    node* mhead=new node;//head of co-efficients of first polynomial
    mhead->next=NULL;
    node* resultHead=new node;
    resultHead->next=NULL;
    for (int i = 0; i <=n ; ++i) {
       cin>>a;//co-efficient of term with power i
       insertAtTheFront(a,nhead,i);
    } for (int i = 0; i <=m ; ++i) {
        cin>>a;//co-efficient of term with power i
        insertAtTheFront(a,mhead,i);
    }
    node* temp=resultHead;
    for (int k =n+m ; k>=0; --k) {
        insertAtTheFront(0,resultHead,k);
    }
        multiply(nhead,mhead,resultHead);
    temp=resultHead->next;
    for (int k =n+m ; k>=0;--k) {
        cout<<temp->data<<"x^"<<temp->power;
        k?cout<<" + ":cout<<" ";
        temp=temp->next;
    }
    return 0;
}
