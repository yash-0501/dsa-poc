/*
Append last k nodes to start of linked list.
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

int length(node* head){
    int count=0;
    node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

node* appendKnodes(node* &head, int k){
    node* newHead;
    node* newTail;
    node* tail=head;

    int len = length(head);

    k=k%len; //so that k doesn't exceed length of linked list
    int count=1;
    while(tail->next!=NULL){
        if(count==len-k){
            newTail=tail;
        }
        if(count==len-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;

    return newHead;
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

    node* newHead = appendKnodes(head,3);
    display(newHead);
    
    return 0;
}