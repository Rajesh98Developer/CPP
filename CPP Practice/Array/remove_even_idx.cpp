// print last element after succefully remove even index
// from an array
#include <iostream>
using namespace std;

void removeEvenidx(int arr[],int n){
    
    if(n==0){
        cout << -1;
        return;
    }
    if(n==1) {
        cout << arr[0];
        return;
    }
    int arr2[n/2]; int k=0;
    for(int i=0; i< n; i++){
        if(i%2 != 0){
            arr2[k] = arr[i];
            k=k+1;
        }
    }
    removeEvenidx(arr2,n/2);
}

int main(){
    int arr[7]={0,1,2,3,4,5,6};
    removeEvenidx(arr,7);
}