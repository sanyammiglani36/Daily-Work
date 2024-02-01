#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements : " << endl;
    cin >> n;
    int product  = 1;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    for(int i = 0;i<n;i++){
        product  = product * arr[i];
    }
}