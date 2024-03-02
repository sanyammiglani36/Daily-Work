#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAthead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertAtTail(Node* &tail,int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head,int position,int d){

    //insert at 1st position
    if(position == 1){
        insertAthead(head,d);
        return;
    }
    Node* temp= head;
    int count = 1;
    while(count < position-1){
        temp = temp -> next;
        count++;
    }   
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp-> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);

    insertAthead(head,3);
    print(head);

    insertAthead(head,4);
    print(head);

    insertAtPosition(head,3,22);
    print(head);

    
}

