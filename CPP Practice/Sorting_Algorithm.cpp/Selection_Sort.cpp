// find minimum index and swap it with starting index of 
// unsorted array 
// repeate above for n times using for loop

#include <iostream>
#include <vector>
using namespace std;

vector<int> SelectionSort(vector<int> &arr, int n){
    int minIndex;
    for(int i=0; i<n; i++){
        minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[minIndex] > arr[j]) minIndex = j; 
        }
        swap(arr[i],arr [minIndex]);
    }
    return arr;
}

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
    arr = SelectionSort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

