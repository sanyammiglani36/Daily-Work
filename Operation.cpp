//Insertion of Elements
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[3] = {};
//     cout << "Array Before Insertion : ";
//     for(int i = 0;i<3;i++){
//         cout << arr[i] << endl;
//     }

//     cout << "Inserting Elements  : ";
//     for(int i = 0;i<3;i++){
//         arr[i] = i+2;
//         cout << arr[i] << endl;
//     }
// }

//Search Operaation
#include<iostream>
using namespace std;

int main(){
    int n ; 
    cout << "Enter the number : ";
    cin >> n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i] ;
    }
    int key;
    cout << "Enter the key : ";
    cin >> key;

    for(int i = 0;i<n;i++){
        if(arr[i] == key) { 
            cout << "Found Element" << " " << key  << " "<< "at position" << " " << i+1;
        }
    }
}