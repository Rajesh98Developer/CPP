#include <iostream>
#include <vector>
using namespace std;

int getMin(vector<int> &arr,int n,int k,int cnt, int MinIndex){
    //cout << arr[MinIndex] << endl;
    if(cnt == k){
        return arr[MinIndex];
    }
    int start = 0; int end = n-1;
    while(start <= end){
        if(arr[start] < arr[end]){
            if(arr[start] < arr[MinIndex]) MinIndex = start;
        }
        else{
            if(arr[end] < arr[MinIndex]) MinIndex = end;
        }
        start++; end--;
    }
    swap(arr[MinIndex], arr[n-1]);
    getMin(arr, n-1, k, cnt+1, MinIndex);
}
/*
int kthSmallest(vector<int> &arr, int k) {
        
    int MinIndex=0;
    int cnt =0;
    int Min =  getMin(arr, sizeof(arr)/sizeof(arr[0]), k, cnt, MinIndex);
    return Min;
} */

int main(){
    int n,a;
    vector<int> arr;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter element of array: ";
    for(int i=0; i<n; i++){
        cin >> a;
        arr.push_back(a);
    }
    //int ans = kthSmallest( arr, 3);
    int ans =  getMin(arr, sizeof(arr)/sizeof(arr[0]), 2, 0, 0);
    cout << ans << " ";
}