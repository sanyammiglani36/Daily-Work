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
void insertAtTail(Node* &tail,int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &tail){
    Node* temp = tail;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp-> next;
    }
    cout << endl;
}

int main(){
    Node* node1 = new Node(10);

    Node* tail = node1;
    print(tail);

    insertAtTail(tail,100);
    print(tail);

    insertAtTail(tail,800);
    print(tail);
}