#include <bits/stdc++.h>

using namespace std;
struct node {
    int data;
    node *next;
};

node *createnode() {
    node *newnode = new node;
    return newnode;
}

//insertion at the end
void insertAtTheEnd(int x, node *head) {
    if (head->next == NULL) {
        head->next = createnode();
        head->next->data = x;
        head->next->next = NULL;
    } else {
        //head->next=
        insertAtTheEnd(x, head->next);
    }
    //return head;
}

// Insertion at the front
void insertAtTheFront(int x, node *head) {
    node *newnode = createnode();
    newnode->next = head->next;
    newnode->data = x;
    head->next = newnode;
    //return head;
}

//Insertion before x
void insertBeforeX(int x, int a, node *head) {
    if (head->next == NULL) {
        cout << x << " " << " Doen\'t exist";
        // return head;
    } else if (head->next->data == x) {
        node *newnode = createnode();
        newnode->data = a;
        newnode->next = head->next;
        head->next = newnode;
    } else {
        //head->next=
        insertBeforeX(x, a, head->next);
    }
    //return head;
}

//Insertion After x
void insertAfterX(int x, int a, node *head) {
    if (head->next == NULL) {
        cout << x << " " << " Doen\'t exist";
        //return head;
    } else if (head->next->data == x) {
        node *newnode = createnode();
        newnode->data = a;
        newnode->next = head->next->next;
        head->next->next = newnode;
    } else {
        // head->next=
        insertAfterX(x, a, head->next);
    }
    // return head;
}

//delete from front
void deleteFromFront(node *head) {
    node *temp = head->next;
    head->next = head->next->next;
    free(temp);
}

//delete from back
void deleteFromBack(node *head) {
    if (head->next->next == NULL) {
        node *temp = head->next;
        head->next = NULL;
        free(temp);
    } else
        deleteFromBack(head->next);
}

//delete a specific node
void deleteX(node *head, int x) {
    if (head->next->data == x) {
        node *temp = head->next;
        head->next = temp->next;
        free(temp);
    } else {
        deleteX(head->next, x);
    }
}

// printing the node
void PrintList(node *head) {
    if (head->next == NULL)
        return;
    else {
        cout << head->next->data << " ";
        PrintList(head->next);
    }
}

int main() {
    int n;//number of elements
    cin >> n;
    node *head = new node;
    head->next = NULL;
    int a, x;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        insertAtTheEnd(a, head);
    }
    //head=insertBeforeX(x,a,head);
}