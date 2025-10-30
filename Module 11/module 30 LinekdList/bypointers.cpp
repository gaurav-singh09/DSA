#include<iostream>
using namespace std;


class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void display(Node* head){
    // Node* temp=head;
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

int size(Node* head){
    int n=0;
    Node* temp=head;
    while(temp!=NULL){
        // cout<<temp->val<<" ";
        temp=temp->next;
        n++;
    }
    return n;
    cout<<endl;
}

void displayrecursive(Node* head){
  if(head==NULL)return;
  cout<<head->val<<" ";
  display(head->next);
}

int main(){;
    Node* a=new Node(10);//Node(10 ) is a constructor
    Node* b=new Node(20);//Now we are keeping the addresses of these things on the node
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;//this means (*a).next a ke address pe jao aur next wale ka value daal do 
    b->next=c;
    c->next=d;
    d->next=e;
    //No need to do null as d->next=NULL
    // cout<<a->val;
    // Node* temp=a;
    // while(temp!=NULL){
    //     cout<<temp->val<<" ";
    //     temp=temp->next;
    // }
    // cout<<a->next->next->val;
    display(a);
    //10->20->30->40->50->NULL  representation
    cout<<size(a)<<endl;
    displayrecursive(a);
//no limitation of size
//class NOde{
// int val; Node* next;};//Node class

// with parameterised constructor
/*
 class node{
 int val;
 NOde* next;
 NOde(int val){
 this->val=val;
 this->next=NULL;
 }
 };


*/
/* 
 Displaying a LinkedLIst
  by recursively
  void display(NOde* head){
  if(head==NULL)return;
  cout<<head->val;
  display(head->next);
  }

*/


    return 0;
}