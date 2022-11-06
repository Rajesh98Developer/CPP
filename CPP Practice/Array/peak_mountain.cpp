#include<iostream>
using namespace std;

int peakMountain(int arr[], int n){
    int start =0, end =n-1;
    int mid = start + (end-start)/2;

    while(start < end){
        
        if(arr[mid] < arr[mid +1]){
            start = mid + 1;
        }
        else end = mid;
        mid = start + (end-start)/2;
	}
    return mid;
}

int main(){
    int ans;
    int n = 13;
    int arr[n]={2,3,4,5,15,10,9,7,5,4,3,2,1};
    ans = peakMountain(arr, n);
    cout << "Peak of mountain array is at "<<ans<< " = "<<arr[ans]; 
}
