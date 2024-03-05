#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* previous;

    Node(int data){
        this -> data = data;
        this -> previous = NULL;
        this -> next = NULL;
    }
};

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> previous = tail;
    tail = temp;
}

void print(Node* &tail){
    Node* temp = tail;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    Node* node1 = new Node(10);

    Node* tail = node1;
    print(tail);

    insertAtTail(tail,23);
    print(tail);

    insertAtTail(tail,34);
    print(tail);

    insertAtTail(tail,56);
    print(tail);
}