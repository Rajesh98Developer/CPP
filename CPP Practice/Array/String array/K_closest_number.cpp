// find k closest number in an sorted arry
#include <iostream>
using namespace std;
 
int KclosestNum(int *arr, int n, int k,int num)
{
    int left= 0,right= n-k; // Creating window of k number
    while(left < right){
        int mid = left+(right-left)/2;
        if(num-arr[mid] > arr[mid+k]-num){
            left=mid+1;
        }
        else right=mid;
    }
    return left;
}
 
int main()
{
    int arr[] = { 100, 200, 400,500,700, 800 };
    int k = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    int leftIndex = KclosestNum(arr, n, k,300);
    for(int i=leftIndex; i<leftIndex +k; i++){
        cout << arr[i] << " ";
    }
}