#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int arr2[3][3];

    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            arr2[i][j] = arr[j][i];
        }
    }
    for(int i = 0;i<3;i++){
        for(int j= 0;j<3;j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    
}