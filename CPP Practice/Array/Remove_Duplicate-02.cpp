// Remove duplicate from an sorted array

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // Logic to remove dupicate array
    int prev=0, count=0;
    for(int i=0; i<n; ++i){
        if(arr[prev] != arr[i]) {
            count++;
            arr[++prev] = arr[i];
        }
    }

    for(int i=0; i <= count; i++){
        cout << arr[i] << " ";
    }
}