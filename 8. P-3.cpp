
//use online compiler to run this code

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
    }
};

node* reverseLinkedList(node* &head){
   node* current_node=head;
   node* prev_node = NULL;
   node* temp;

   while(current_node!=NULL){
        temp = current_node->next;
        current_node->next = prev_node;
        prev_node = current_node;
        current_node = temp;
   }
   return prev_node;
}

void insertAtHead(node* &head, int data){
    if(head == NULL){
        head = new node(data);
        return;
    }
    //otherwise
    node* n = new node(data);
    n->next = head;
    head = n;
}


void printLinkedList(node* head){
    while(head!=NULL){
        cout<< head->data <<" -> ";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    node* head = NULL;

    insertAtHead(head,5);  //call by reference
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);

    printLinkedList(head);  //call by value

    head = reverseLinkedList(head);  //By iterative method

    printLinkedList(head);


    return 0;
}

