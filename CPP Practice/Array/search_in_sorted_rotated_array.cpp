#include<iostream>
#include<vector>
using namespace std;

int getPivot(vector<int>& arr, int n){
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if (arr[mid] >= arr[0]) s = mid+1;
        else e = mid;
        mid = s+(e-s)/2;
    }
    return e;    // or can be return s;
}

int binarySearch(vector<int>& arr, int s, int e, int k ){
    int start = s; int end = e;
    int mid = start + (end-start)/2;
    while (start <= end){
        if(arr[mid] == k){
            return mid;  
        }
        else if (arr[mid] > k){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
	}
    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot = getPivot(arr, n);
    if (arr[pivot] <= k && k <= arr[n-1]){
        return binarySearch(arr, pivot, n-1, k );
    }
    else {
        return binarySearch(arr, 0, pivot-1, k );
	}
}

int main(){
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    int ans = findPosition( arr, arr.size(), 7);
    cout << "Rajesh I Love You: "<<ans;
}