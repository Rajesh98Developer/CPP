#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for (int i=0; i<n;i++){
        cout << arr[i] << " ";
    }
}

void sort01(int arr[], int n){
    int i=0;
    int j=n-1;
    while(i < j){
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++; j--;
        }
        else if(arr[i]==0) i++;
        else if(arr[j]==1) j--;
    }
    //return arr[n];
}

int main(){
    int arr[]={0,1,1,0,1,0,0,1,1,0,1,0,1};
    int n=13;
    int ans[n];
    sort01(arr,n);
    printArr(arr,n);

}