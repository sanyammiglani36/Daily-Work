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

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp-> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

//to fid the length
int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;

}


int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);

    cout << getLength(head);
}
