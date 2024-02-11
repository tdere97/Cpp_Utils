#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
};
void print(Node *n){
    
    while(n!=NULL){
        cout<<n->val<<" -> ";
        n=n->next;
    }
    cout<<endl;

}
void insertatFront(Node **head, int val){
    //Preapre a new NOde
    //Put it in front of current node
    //Move head of the list of the current node
    Node* newnode=new Node();
    newnode->val=val;
    newnode->next=*head;
    *head=newnode;

}
 void insertatEnd(Node **head,int val){
    //prepare a new node
    //check if linked list is empty
    //find th last node
    //insert new node at the last
    Node *newnode=new Node();
    newnode->val=val;
    newnode->next=NULL;
    if(*head==NULL){
        cout<<"Linked List is empty";
        *head=newnode;
        return;
    }
    Node *last=*head;
    while(last->next!=NULL){

        last=last->next;
    }
    last->next=newnode;
 }
void insertAfter(Node *previous,int val){
    //check if previous node passed is null
    //create a new node
    //attach a new node after that
    if(previous==NULL){
        return;
    } 
    Node *newNode=new Node();
    newNode->val=val;
    newNode->next=previous->next;
    previous->next=newNode;
}

void del(Node **head, int val){
    Node* temp =new Node();
    temp=*head;
    Node* prev =new Node();
    prev=*head;
    while(prev->next->val!=val){
        prev=prev->next;
    }
    temp=prev->next;
    prev->next=temp->next;
    delete temp;

}
void lenghtLL(Node *head){
    int count=0;
    Node *temp=new Node();
    temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    delete temp;
    cout<<"Lenth of LL is : "<<count<<endl; 

}

int main(){
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();

    head->val=1;
    head->next=second;

    second->val=2;
    second->next=third;

    third->val=3;
    third->next=NULL;

    print(head);
    insertatFront(&head,-1);
    print(head);
    insertatEnd(&head,5);
    print(head);
    insertAfter(head,4);
    print(head);
    del(&head,4);
    print(head);
    lenghtLL(head);


}