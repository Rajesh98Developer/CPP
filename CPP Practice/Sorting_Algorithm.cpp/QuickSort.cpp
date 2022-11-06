// Take a pivote element find appropriate position(pivoteIndex) and
// swap with pivoteIndex, than rearrange whole array in 
// such that, lesser than pivote will be left side and greater
// will be at right side
// apply quicksort for both left and right part



#include <iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int s,int e){
    int pivot= arr[s];
    int count = 0;
    for (int i=s+1; i<=e; i++){
        if(arr[i] <= pivot) count++;
    }
    int pivotIndex = s + count;
    swap(arr[s],arr[pivotIndex]);
    int i=s; int j=e;
    while(i < pivotIndex && j > pivotIndex){
        while(pivot >= arr[i]) i++;
        while(pivot <= arr[j]) j--;
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(vector<int>& arr, int s,int e){
    if(s >= e) return;
    int p = partition(arr, s, e); // Partition return index of sorted element
    quickSort(arr, s, p-1); // Left Part
    quickSort(arr, p+1, e); // Right Part
            
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
    quickSort(arr, 0, n-1);
    cout << "Sorted array is : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}