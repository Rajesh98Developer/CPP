#include <iostream>
using namespace std;

void permutation(int *arr, int l, int r){
    if(l==r) {
        for(int i=0; i<=r; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    for(int i=l; i<=r; i++){
        swap(arr[l],arr[i]);
        permutation(arr,l+1,r);
        swap(arr[l],arr[i]);
    }
}

int main()
{
    int n;
    cout <<"Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout <<"Enter the elements of array: ";
    for(int i=0;i<n;i++) cin >> arr[i];
    permutation(arr,0,n-1);
}