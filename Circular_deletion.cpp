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

void insertNode(Node* &tail,int element,int d){
    if(tail == NULL){
        //Empty List
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    //Non-Empty List
    else{
        Node* current = tail;

        while(current -> data != element){
            current = current -> next;
        }

        Node* temp = new Node(d);
        temp -> next = current -> next;
        current -> next = temp;
    }
}

void print(Node* &tail){
    Node* temp = tail;
    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(temp != temp);
    cout << endl;
}

int main(){

    Node* tail = NULL;

    insertNode(tail,5,12);
    print(tail);

    insertNode(tail,5,11);
    print(tail);

    insertNode(tail,11,5);
    print(tail);

}

