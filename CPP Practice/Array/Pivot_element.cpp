#include<iostream>
using namespace std;

int pivotElement(int arr[], int n){
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if (arr[mid] >= arr[0]) s = mid+1;
        else e = mid;
        mid = s+(e-s)/2;
    }
    return arr[e];
}

int main(){
    int arr[]={6,7,8,9,1,2,3,4,5};
    int n=9;
    int pivot = pivotElement(arr,n);
    cout << "Pivot element is: " << pivot;
}