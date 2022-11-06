#include<iostream>
using namespace std;

int firstOccurance(int arr[],int n, int k ){
    int mid=0,ans = -1;
    int start = 0; int end = n-1;
    while (start <= end){
        mid = start + (end-start)/2;
        if(arr[mid] == k){
            ans = mid;  
            end = mid -1;
        }
        else if (arr[mid] > k){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
	}
    return ans;
}
    
int lastOccurance(int arr[],int n, int k ){
    int mid=0,ans = -1;
    int start = 0; int end = n-1;
    while (start <= end){
        mid = start + ((end-start)/2);
        if(arr[mid] == k){
            ans = mid;
            start = mid +1;
        }
        else if (arr[mid] > k){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
	}
    return ans;
}

pair<int, int> firstAndLastPosition(int arr[], int n, int k)
{
    // Write your code here
    pair<int, int> ans;
   ans.first = firstOccurance(arr, n, k );
   ans.second = lastOccurance(arr, n, k );
    return ans;
}

int main(){
    pair<int, int> ans;
    int n = 15;
    int k = 5;
    int arr[n]={1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
    ans = firstAndLastPosition(arr, n, k);
    cout << "First occurance of "<< k <<" is at Index: "<< ans.first<< endl;
    cout << "Second occurance of "<< k <<" is at Index: "<< ans.second<< endl;
    cout << "occurance of "<< k <<" is: "<< (ans.second-ans.first)+1 << " times"<< endl;
}