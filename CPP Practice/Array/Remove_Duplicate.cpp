// Remove duplicate from an unsorted array
#include<iostream>
using namespace std;

void removeDuplicates(int *arr, int n){
    int i,j,cnt =0; int res[n];
    for(i=0; i< n; i++){
        for(j=0; j< n; j++){
            if(arr[i] == arr[j]) {
                break;
            }
        }
        if(i == j) {
            res[cnt++] = arr[i];
        }
    }
    cout <<"New String: ";
    for(int k=0; k < cnt; k++){
        cout<< res[k] <<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    removeDuplicates(arr, n);
    // Logic to remove dupicate array
    // int res[n]={0}; int exist=0;int k=0;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(arr[i] == res[j]) {
    //             exist=1;
    //             break;
    //         }
    //     }
    //     if(exist == 0) res[k++]=arr[i];
    //     exist =0;
    // }

    // for(int i=0; i<n; i++){
    //     cout << res[i] << " ";
    // }
}