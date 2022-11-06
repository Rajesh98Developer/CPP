#include <iostream>
using namespace std;

void reverse(int arr[],int n){
    int start,end;
    start = 0; end = n-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++; end--;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[100];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the array: ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    reverse(arr,n);
}