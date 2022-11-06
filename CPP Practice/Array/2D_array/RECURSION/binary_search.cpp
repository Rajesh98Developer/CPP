#include<iostream>
#include<vector>
using namespace std;

bool isSortedArray(int* arr, int n){
    if(n==1 || n==0) return true;
    if(arr[n-2] > arr[n-1]) return false;
    else return isSortedArray(arr, n-1);
}

int main(){
    int n;
    cout<<"Enter size of row: ";
    cin >> n;
    int res[20];
    for(int i=0; i<n; i++){
        cin >> res[i];
    }
    cout << "Is the row sorted: "<< (isSortedArray(res, n))?  "Yes":"No";
}