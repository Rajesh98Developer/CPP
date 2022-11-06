// devide sorted and unsorted part then take one element
// from unsorted and put into sorted array in perfect 
// location [1,2,4,9,3,5,8,7] 1,2,4,9 is sorted

#include <iostream>
#include <vector>
using namespace std;

vector<int> InsertionSort(vector<int> &arr, int n){

    for(int i=0; i<n; i++){
        int temp=arr[i];
        int j=i-1;
        for(j; j>=0; j--){
            if(arr[j] > temp) arr[j+1]=arr[j];
            else break;
        }
        arr[j+1] = temp;
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
    arr = InsertionSort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}