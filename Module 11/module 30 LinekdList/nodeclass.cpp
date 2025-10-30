#include<iostream>
using namespace std;

class Node{//linkedlist node;
    public:
    int val;
    Node* next;
    Node(int val){//dusri imp
        this->val=val;
        this->next=NULL;
    }
};

int main(){
    //10 20 30 40
    Node a(10);/*
    Node a 
    a.val=10;
    lly, all other value writing all val
    */
    Node b(20);
    Node c(30);
    Node d(40);
    // cout<<a.val<<" "<<a.next<<" "<<&a;
    //Forming LinkedList
    a.next=&b;
    b.next=&c;
    c.next=&d;
    // d.next=NULL;
    // cout<<(*(a.next)).val<<endl;
    // cout<<(a.next)->val;

    //((a.next)->next)->val;
    // cout<<((a.next)->next)->val;//(a.next)is address of b and (a.next)->val will give value of band ((a.next))->next will give c ka addres and ((a.next))->next)->val will give value of c;
    //(*(*(*(a.next).next).next))->val;
    // cout<<(*((*((*(a.next)).next)).next)).val;
    Node temp=a;
    while(1){//temp.next!=NULL
        cout<<temp.val<<" ";
        if(temp.next==NULL)break;
        temp=(*(temp.next));//address of b
    }//Not a Good Option to print all these 
    //sirf pointers pr work krenge aur hamara kaam aasan hoga so go with that 
    

    
    return 0;
}