/* 
Reverse K nodes of a linked list. 
Input: 1->2->3->4->5->6  .... k=2
Output: 2->1->4->3->6->5
*/


#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtEnd(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node* reverseK(node* &head, int k){
    node* prevPtr=NULL;
    node* currPtr=head;
    node* nextPtr;

    int count = 0;
    //first k nodes are reversed
    while(currPtr!=NULL && count<k){
        nextPtr=currPtr->next;
        currPtr->next=prevPtr;
        prevPtr=currPtr;
        currPtr=nextPtr;
        count++;
    }

    if(nextPtr!=NULL)
        head->next = reverseK(nextPtr,k);

    return prevPtr;
}

int main()
{
    node* head=NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    insertAtEnd(head,6);

    display(head);
    node* newHead = reverseK(head,5);
    display(newHead);
    return 0;
}