#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
        Node(int d){
            this -> data = d;
            this -> next = NULL;
        }
};

void insertAtBeg(Node* &head, int data){
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtEnd(Node* &tail, int data){
    Node *temp = new Node(data);
    tail -> next = temp;
    tail = temp;
    
}

void print(Node* &head){
    Node*  temp = head;
    
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    // cout<<node1 -> data;
    
    Node* head = node1;
    Node* tail = node1;
    
    print(head);
    insertAtEnd(tail, 12);
    insertAtEnd(tail, 15);
    insertAtEnd(tail, 13);
    insertAtEnd(tail, 18);
    print(head);
    
    return 0;
}
