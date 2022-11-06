#include<iostream>
using namespace std;

void merdge(int arr1[],int m, int arr2[], int n, int arr3[]){
    int i=0,j=0,k=0; 
    while(i<m && j<n){
        if(arr1[i] > arr2[j]){
            arr3[k++] = arr2[j++];
        }
        else {
            arr3[k++] = arr1[i++]; 
        }
    }
    while(i<m){
        arr3[k++] = arr1[i++];
    }
    while(j<n){
        arr3[k++] = arr2[j++];
    }
}

void print(int arr3[], int k){
    for(int i=0; i<k; i++){
        cout << arr3[i] << " ";
    }
}

int main(){
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={3,5,7,8};
    int arr3[10]={0};
    merdge(arr1, 6, arr2, 4, arr3);
    print(arr3, 10);
    return 0;
}