// #include<iostream>
// using namespace std;

// int getfactorial(int n){
//     if(n<=1){
//         return (1);
//     }
//     return  n*getfactorial(n-1);
// }
// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     cout << getfactorial(n) << endl;
// }

#include<iostream>
using namespace std;

int getFactorial(int n){
    if(n<=1){
        return 1;
    }
    return n*getFactorial(n-1);
}
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << getFactorial(n) << endl;
}