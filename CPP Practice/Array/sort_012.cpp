#include<iostream>
#include<vector>
using namespace std;

vector<int> inputArr(vector<int> &arr){
    int n,temp;
    cout<<"Enter size of array: ";
    cin >> n;
    cout << "Enter the arry: ";
    for(int i; i<n; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    return arr;
}

void printArr(vector<int> &arr){
    int n;
    n=arr.size();
    for(int i; i<n; i++){
        cout << arr[i] <<" ";
    }
}

void sort012(vector<int> &arr){
    int s=0, e = arr.size()-1;
    while(s<e){
        if(arr[s] ==0 ) s++;
        if(arr[e] !=0 ) e--;
        if(arr[s] !=0 && arr[e]==0) swap(arr[s++],arr[e--]);

    }
    s=0; e=arr.size()-1;
    while(s<e){
        if(arr[s] !=2 ) s++;
        if(arr[e] !=1 ) e--;
        if(arr[s] ==2 && arr[e]==1) swap(arr[s++],arr[e--]);
        
    }
}

int main(){
    vector<int> arr;
    arr=inputArr(arr);
    sort012(arr);
    printArr(arr);
}