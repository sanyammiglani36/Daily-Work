//Seletion Sort is method me hum sabse smallest ya sabse bade element ko first place pr swap krte rhenge
// isme do loops chalenge phle i=0 se n-1 tk or dusra j = i+1 se j=n tk

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number of elements : ";
//     cin >> n;

//     int arr[n];

//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     for(int i = 0;i<n-1;i++){
//         for(int j = i+1;j<n;j++){
//             if(arr[j]<arr[i]){
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }cout << endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of elements : ";
//     cin >> n;

//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }

//     for(int i = 0;i<n-1;i++){
//         for(int j = i+1;j<n;j++){
//             if(arr[j]<arr[i]){
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
//     for(int i =0;i<n;i++){
//         cout << arr[i];
//     }cout << endl;
// }



// Bubble Sort - This type of sorting is used to sort the elements with its adjacent(neighbour) element if they are in wrong order



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of elements : ";
//     cin >> n;

//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     int counter = 1;
//     while(counter<n){
//         for(int i = 0;i<n-counter;i++){
//             if(arr[i] > arr[i+1]){
//                 int temp = arr[i];
//                 arr[i] = arr[i+1];
//                 arr[i+1] = temp;
//             }
//         }
//         counter++;
//     }
//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }cout << endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of elements : ";
//     cin >> n;

//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }

//     int counter = 1;
//     while(counter < n){
//         for(int i = 0;i<n-counter;i++){
//             if(arr[i]>arr[i+1]){
//                 int temp = arr[i];
//                  arr[i] = arr[i+1];
//                 arr[i+1] = temp;
//             }
//         }
//         counter++;
//     }
//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }cout << endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number of elements : ";
//     cin >> n;

//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     for(int i = 0;i<n-1;i++){
//         for(int j =i+1;j<n;j++){
//             if(arr[j] < arr[i]){
//                 int temp = arr[j];
//                 arr[j]  = arr[i];
//                 arr[i] = temp;

//             }
//         }
//     }
//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }cout << endl;
// }

//Insertion Sort = This Sorting method is used to sort elements in ascending order  and compare with the current element to its prodecessor

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of elements : ";
//     cin >> n;

//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     for(int i = 1;i<n;i++){
//         int current = arr[i];
//         int j = i-1;
//         while(arr[j] > current && j>=0){
//             arr[j+1] = arr[j];
//             j--;
//         } 
//         arr[j+1] = current;
//     }
//     for(int i = 0;i<n;i++){
//         cout << arr[i];
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of elements : ";
//     cin >> n;

//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }

//     for(int i = 0;i<n;i++){
//         int current = arr[i];
//         int j = i-1;
//         while(arr[j] > current && j>=0){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = current;
//     }
//     for(int i = 0;i<n;i++){
//         cout << arr[i];
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the elements : ";
//     cin >> n;

//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     int counter = 1;
//     while(counter<n){
//         for(int i=0;i<n-counter;i++){
//             if(arr[i]>arr[i+1]){
//                 int temp = arr[i];
//                 arr[i] = arr[i+1];
//                 arr[i+1] = temp;
//             }
//         }
//         counter++;
//     }
//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of elements : ";
//     cin >> n;

//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     int counter = 1;
//     while(counter<n){
//         for(int i = 0;i<n-counter;i++){
//             if(arr[i] > arr[i+1]){
//                 int temp = arr[i+1];
//                 arr[i+1] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//         counter++;
//     }
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }cout << endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number of elements : ";
//     cin >> n;

//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     for(int i =1;i<n;i++){
//         int current = arr[i];
//         int j = i-1;
//         while(arr[j] > current && j>=0){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = current;
//     }
//     for(int i = 0;i<n;i++){
//         cout << arr[i];
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of elements : ";
//     cin >> n;

//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     int counter = 1;
//     while(counter<n){
//         for(int i = 0;i<n-counter;i++){
//             if(arr[i+1] < arr[i]){
//                 int temp = arr[i];
//                 arr[i] = arr[i+1];
//                 arr[i+1] = temp;
//             }
//         }
//         counter++;
//     }
//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " "; 
//     }cout << endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of elements : ";
//     cin >> n;

//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin >> arr[i];
//     }
//     for(int i = 1;i<n;i++){
//         int current = arr[i];
//         int j = i-1;

//         while(arr[j]  > current && j>=0){
//             arr[j+1]  = arr[j];
//             j--;
//         }
//         arr[j+1] = current;

//     }
//     for(int i = 0;i<n;i++){
//         cout << arr[i] << " ";
//     }cout << endl;
// }

//merge sort
#include<iostream>
using namespace std;

void merge(int arr[],int mid,int l,int r){
    int n1= mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++){
        a[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i] = arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k] = a[i];
            k++;
        }
    }
}

void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        
    }
}