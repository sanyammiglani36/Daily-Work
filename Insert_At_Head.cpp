// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* previous;
//     Node* next;

//     //constructor
//     Node(int data){
//         this-> data =data;
//         this-> next = NULL;
//         this-> previous = NULL;
//     }
// };

// void insertAtHead(Node* &head,int d){
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head -> previous = temp;
//     head = temp;
// }

// void print(Node* &head){
//     Node* temp= head;
//     while(temp != NULL){
//         cout << temp -> data << " ";
//         temp = temp-> next;
//     }
//     cout << endl;
// }

// int main(){
//     Node* node1 = new Node(10);

//     Node* head = node1;
//     print(head);

//     insertAtHead(head,34);
//     print(head);


// }

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* previous;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> previous = NULL;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next =head;
    head -> previous = temp;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp-> next;
    }
    cout << endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* head =node1;
    print(head);

    insertAtHead(head,12);
    print(head);

    insertAtHead(head,14);
    print(head);
}