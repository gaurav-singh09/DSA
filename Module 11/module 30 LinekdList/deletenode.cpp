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

void deletenode(Node* head, Node* tar){
    Node* temp=head;
    while(temp->next!=tar){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}



int main(){
    Node* a=new Node(10);//Node(10 ) is a constructor
    Node* b=new Node(20);//Now we are keeping the addresses of these things on the node
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;//this means (*a).next a ke address pe jao aur next wale ka value daal do 
    b->next=c;
    c->next=d;
    d->next=e;
    Node* head=a;
    display(a);
    head= deletenode(a,d);
    display(head);

}


//delete(head,val)
/*
1. temp=head;
2. traverse to the number
3.

Node* deletenode(Node* head, int targetVal){
    if(head->val==targetVal){
        head = head->next;
        return head;
    }
    Node* temp=head;
    while(temp->next->val!=targetVal){
        temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
            } 
*/