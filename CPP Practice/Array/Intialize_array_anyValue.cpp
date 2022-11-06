#include <iostream>
using namespace std;

void printArr(int arr[],int size){
    for (int i=0; i<size; i++){
    cout << arr[i] << " ";
    }
}

int main(){
   // int arr[5] = {}; // Initialize with zero or {0}
    int arr[5];
    //int arr[5] = {2,3}; // intialize with 2,3,0,0,0
    //arr[5] = {2,3};  // Error 
    // fill_n (arr name, arr size, value to fill)
    fill_n (arr,5,3);  
    printArr(arr, sizeof(arr)/sizeof(int));
    
}