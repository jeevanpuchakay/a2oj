//JeevanReddy
//180001039
//asssignment-4
//question-1


#include <iostream>
using namespace std;
struct pqueue{
    int data;
    int priority;
    pqueue* right;
    pqueue* left;
};

// tail......elements.....head

// returns the highest priority in the queue
int HighestPriority(pqueue* head){
    int maxPriority=0;
    pqueue* temp=head;
    while (temp->left!=NULL){
        maxPriority=(temp->left->priority)>maxPriority?(temp->left->priority):maxPriority;
        temp=temp->left;
    }
    return maxPriority;
}

//deleting the highest priority element in the queue
void deleteHighestpriority(pqueue* head,int prio){
    if(head->left->priority==prio){
        pqueue* temp=head->left;
        head->left=temp->left;
        temp->left->right=head;
        cout<<temp->data<<" ";
        free(temp);
        return;
    }
    else{
        deleteHighestpriority(head->left,prio);
    }
    return;
}

//printing the highest priority element
void printHighestpriorityElement(pqueue* head,int prio){
    if(head->left->priority==prio){
        pqueue* temp=head->left;
        cout<<temp->data<<" ";
        return;
    }
    else{
        printHighestpriorityElement(head->left,prio);
    }
}

//pops the entire queue in descending order of their priority
void popAccordingtoPriority(pqueue* head){
    int prioMax=HighestPriority(head);
    while(prioMax){
        deleteHighestpriority(head,prioMax);
        prioMax=HighestPriority(head);
    }
}
//inserting element at the end(i.e beside tail)
void insertElement(pqueue* tail,int key,int prio){
    pqueue* temp=new pqueue;
    temp->data=key;
    temp->priority=prio;
    temp->left=tail;
    temp->right=tail->right;
    tail->right->left=temp;
    tail->right=temp;
    return;
}
int main() {

    // tail......elements.....head

    pqueue* tail=new pqueue;
    pqueue* head=new pqueue;
    tail->data=tail->priority=head->priority=head->data=0;
    tail->left=head->right=NULL;
    head->left=tail;
    tail->right=head;
    int n;
    cin>>n;
    int key,prio,maxPriority=0;
    for (int i = 0; i < n; ++i) {
        cin>>key>>prio;
        insertElement(tail,key,prio);
    }
    //printing the highest priority element
    cout<<"the highest priority element is ";
    printHighestpriorityElement(head,HighestPriority(head));
    //popping the entire queue
    cout<<endl<<"The entire queue ";
    popAccordingtoPriority(head);
    return 0;
}