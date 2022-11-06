// merdge array to be store in 1st array
#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int> &arr, int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
  
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
  
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
  
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
  
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
  
// main function to do heap sort
void heapSort(vector<int> &arr, int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
  
    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
  
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

void merdge(vector<int> &arr1,int m, vector<int> &arr2, int n){
    for(int i=0; i<n; i++){
        arr1.push_back(arr2[i]);
    }
    heapSort(arr1,size(arr1));
    
}

void print(vector<int> &arr){
    int k = size(arr);
    for(int i=0; i< k; i++){
        cout << arr[i] << " ";
    }
}
void inputArr(vector<int> &arr){
    int n,k;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements array: ";
    for(int i=0; i<n; i++){
        cin >> k;
        arr.push_back(k);
    }
    
}

int main(){
    vector<int> arr1;
    vector<int> arr2;
    inputArr(arr1);
    inputArr(arr2);
    merdge(arr1, size(arr1), arr2, size(arr2));
    print(arr1);
    return 0;
} 