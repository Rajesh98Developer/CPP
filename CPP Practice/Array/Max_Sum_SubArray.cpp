// Do if all elements are -ve and return the subarray

#include <iostream>
using namespace std;

int MaxSubArray(int arr[],int n){
    int maxSum=0; int sum=0;
    for(int j=0; j<n; j++){
        sum = sum + arr[j];
        if(sum > maxSum) maxSum = sum;
        if(sum < 0) sum=0;
    }
    return maxSum;
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
    int maxSum = MaxSubArray(arr,n);
    cout << maxSum <<" ";
}