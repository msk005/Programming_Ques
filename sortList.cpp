#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
      int data;
      node* next;
      node(int val){
          data =val;
          next=NULL;
      }
};
void insertAtLast(node* &head,int val){
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

node* merge(node*& head1,node* &head2){
    node*p1=head1;
    node*p2=head2;
    node*dummynode=new node(-1);
    node*p3=dummynode;
    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
        while(p1!=NULL){
            p3->next=p1;
            p1=p1->next;
            p3=p3->next;
        }
        while(p2!=NULL){
            p3->next=p2;
            p2=p2->next;
            p3=p3->next;
        }
    return dummynode->next;
}

void printList(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head1=NULL;
    node* head2=NULL;
    int a1[]={1,3,5,7};
    int a2[]={2,4,6};
    for(int i=0;i<4;i++)
         insertAtLast(head1,a1[i]);
    for(int i=0;i<3;i++)     
         insertAtLast(head2,a2[i]);
    
    printList(head1);
     printList(head2);
     node*newhead=merge(head1,head2);
      printList(newhead);
}