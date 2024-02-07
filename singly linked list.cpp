//write a program to find odd or even
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << "Enter a number : ";

    if(n%2==0){
        cout << "Even";
    }
    else{
        cout << "Odd";
    }
}