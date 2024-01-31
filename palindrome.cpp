#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int sum = 0;
    int temp = n;
    while(n>0){
        int r = n%10;
        sum = (sum*10) + r;
        n= n/10;
    }
    if(temp == sum){
        cout << "Palindrome" ;

    }
    else{
        cout << "Not";
    }
}