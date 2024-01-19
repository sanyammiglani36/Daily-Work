#include<iostream>
using namespace std;

bool palindrome(char str[],int n){
    int start = 0;
    int end= n-1;
    while(start <= end){
        if(str[start] != str[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}

void reverse(char a[],int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(a[start++],a[end--]);
    }

}

int getLength(char name[]){
    int count = 0;
    for(int i = 0;name[i] !='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char ch[34];
    cout << "Enter the charater string : ";
    cin >> ch;

    cout << "Entered name is : " << ch << endl;
    int len = getLength(ch);
    cout << "Length is : "<< len <<endl;

     reverse(ch,len);
    cout << "Reversed string is : " << ch << endl;

    int palin =  palindrome(ch,len);
    cout << "Palindrome or not " << palin << endl;
    
}