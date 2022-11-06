// merde array to be store in irst array
#include<iostream>
#include<vector>
using namespace std;

void merdge(vector<int> &arr1,int m, vector<int> &arr2, int n){
    int i=0,j=0,temp; 
    while(i<m && j<n){
        if(arr1[i] <= arr2[j]){
            i++; 
        }
        else {
            temp=arr1[i];
            arr1[i]= arr2[j];
            arr2[j]= temp;
            //i++;
        }
    }
    while(i<m){
        arr1.push_back(arr1[i++]);
    }
    while(j<n){
        arr1.push_back(arr2[j++]);
    }
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