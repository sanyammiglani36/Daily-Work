#include<iostream>
#include<string.h>

using namespace std;
int main(){
    string str;
    cout << "Enter the character string : ";
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        int count = 0;
        for(int j =0;j<str.length();j++){
            if(j<i && str[i] == str[j]){
                break;
            }
            if(str[i] == str[j]){
                count++;
            }
        }
        if(count!=0)
        cout << str[i] <<  " " << "Used Number of Times" << count << " "<< endl;
    }

}