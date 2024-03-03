#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this-> data;

        if(this->next != NULL){
            delete next;
            this-> next  = NULL;
        }
    }
};

void insertAthead(Node* &head,int d){
    Node* temp = new Node(d);

    temp -> next = head;
    head = temp;
}

void insertAtPosition(Node* &head,int position,int d){
    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert-> next = temp-> next;
    temp -> next = nodeToInsert;
    
}

void deleteNode(int position,Node* &head){

    //deleting node at first
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* current = head;
        Node* previous = NULL;
        int count = 1;
        while(count <= position){
            previous = current;
            current = current-> next;
            count++;
        }
        previous-> next = current-> next;
        current -> next  = NULL;
        delete current;

    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp-> data << " ";
        temp = temp-> next;
    }
    cout << endl;
}

int main(){
    Node* node1 = new Node(10);

    Node* head = node1;
    print(head);

    insertAthead(head,12);
    print(head);

    insertAthead(head,17);
    print(head);

    insertAtPosition(head,1,22);
    print(head);

    deleteNode(3,head);
    print(head);
}

