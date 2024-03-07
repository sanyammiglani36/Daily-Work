// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* previous;

//     Node(int data){
//         this -> data = data;
//         this -> previous = NULL;
//         this -> next = NULL;
//     }
// };


// void insertAtHead(Node* &head,int d){
//     Node* temp = new Node(d);
//     temp -> next =head;
//     head -> previous = temp;
//     head = temp;
// }

// void insertAtTail(Node* &tail,int d){
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     temp -> previous = tail;
//     tail = temp;
// }

// void insertAtPosition(Node* &tail,Node* &head,int position,int d){
//     if(position==1){
//         insertAtHead(head,d);
//         return;
//     }
//     Node* temp = head;
//     int current =1;
//     while(current<position-1){
//         temp = temp-> next;
//         current ++;
//     }

//     if(temp -> next == NULL){
//         insertAtTail(tail,d);
//         return;
//     }

//     Node* nodeToInsert = new Node(d);
//     nodeToInsert -> next = temp -> next;
//     temp -> next -> previous = nodeToInsert;
//     temp -> next = nodeToInsert;
//     nodeToInsert -> previous = temp;


// }'/

// void print(Node* &tail){
//     Node* temp = tail;
//     while(temp != NULL){
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }

// int main(){
//     Node* node1 = new Node(10);

//     Node* head = node1;
//     Node* tail = node1;
//     print(head);
    
//     insertAtHead(head,34);
//     print(head);

//     insertAtHead(head,56);
//     print(head);

//     insertAtTail(tail,23);
//     print(head);

//     insertAtPosition(tail,head,2,100);
//     print(head);

// }

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* previous;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> previous = NULL;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head -> previous = temp;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;
    

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);

    tail -> next = temp;
    temp -> previous = tail;
    tail = temp;
}

void insertAtPostion(Node* &tail,Node* &head,int position,int d){
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int current = 1;
    while(current< position-1){
        temp = temp -> next;
        current ++;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> previous = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> previous = temp;
}

int main(){
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,12);
    print(head);

    insertAtHead(head,11);
    print(head);

    insertAtTail(tail,36);
    print(head);

    insertAtPostion(tail,head,2,100);
    print(head);
}
