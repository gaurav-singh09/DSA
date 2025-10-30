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
class LinkedList{
private:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;

    }
    void deleteAtHead(){
        if(size==0){cout<<"The List is empty "; return;}
        else if(size==1) {head=tail=NULL;size--;}
        else{
            head=head->next;
            size--;
        }
        return;
    }

    
    int getAtIdx(int idx){
        if(idx<0||idx>=size)cout<<"Invalid "<<endl<<-1;
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* t=new Node;
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }

    // void deleteAtTail(){
    //     if(size==0){cout<<"The List is empty "; return;}
    //     Node* temp=head;

    // }

    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"Leist is empty";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
        }
        temp->next=temp->next->next;
        size--;
    }
    void display(){
        // int val;
        Node* temp  = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    
};

int main(){;
    LinkedList ll=new LinkedList();//
    LinkedList ll; 
    ll.insertAtEnd(10); //10->NULL
    ll.display();
    ll.insertAtEnd(20);//{10->20->NULL}
    ll.display();
    ll.insertAtEnd(30);
    cout<<ll.size<<endl;  
    ll.insertAtEnd(40);
    cout<<ll.size<<endl;
    ll.display();
    cout<<ll.size<<endl;
    // cout<<getAtIdx(3);
    ll.deleteAtHead();
    cout<<display();


    return 0;
}