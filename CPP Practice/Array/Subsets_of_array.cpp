#include <iostream>
#include<vector>
using namespace std;

void PrintAllSubsets(int *arr, int i, int n,int *subset, int j){    
    // checking if all elements of the array are traverse or not
    if(i==n){
        // print the subset array
        int idx = 0;
        while(idx<j){
            cout<<subset[idx]<<' ';
            ++idx;
        }
        cout<<endl;
        return;
    }
    // for each index i, we have 2 options
    // case 1: i is not included in the subset
    // in this case simply increment i and move ahead
    PrintAllSubsets(arr,i+1,n,subset,j);
    // case 2: i is included in the subset
    // insert arr[i] at the end of subset
    // increment i and j
    subset[j] = arr[i];
    PrintAllSubsets(arr,i+1,n,subset,j+1);
        
}
int main(){
    int n,a;
    int arr[100];
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter element of array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int subset[100];
    int index = 0;
    PrintAllSubsets(arr,0,n,subset,0);
}