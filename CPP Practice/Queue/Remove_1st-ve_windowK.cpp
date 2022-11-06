// Remove 1st -ve element from an array of window k
// {-8,1,5,-9,-6,9}  will be {-8,0,-9,-9,-6}

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<int> inputArr(vector<int> &array,int n){
    cout << endl; int j;
    cout << "Enter elements of array: ";
    for (int i=0; i < n; i++){
        cin >> j;
        array.push_back(j);
    }
    return array;
}

void printArr(vector<int> &arr, int n){
    for (int i=0; i < n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

// vector<int> remov1stNegetiveWindowK(vector<int> arr,int n, int k){
//     deque<int> dq;
//     vector<int> ans;
//     for(int i=0; i<k;i++){
//         if(arr[i]<0) dq.push_back(i);
//     }
//     if(dq.size()>0){
//         ans.push_back(arr[dq.front()]); 
//     }
//     else ans.push_back(0);

//     for(int i=k; i<n; i++){
//         if(!dq.empty() && i-dq.front() >=k){
//             dq.pop_front();
//         }
//         if(arr[i] <0) dq.push_back(i);
//         if(dq.size() >0){
//             ans.push_back(arr[dq.front()]);
//         }
//         else{
//             ans.push_back(0);
//         }
//     }
//     return ans;  
// }

vector<int> remov1stNegetiveWindowK(vector<int> arr,int n, int k){
    vector<int> ans;
    int j=0;
    for(int i=0; i<n-k+1; i++){
        int flag=0;
        for(j=i; j<i+k; j++){
            if(arr[j] <0) {                // Time comp = n*k
                flag=1;
                break;
            }
        }
        if(flag==1){
            ans.push_back(arr[j]);
        }
        else ans.push_back(0);
    }
    return ans;  
}

int main(){
    int n;
    vector<int> arr,ans;
    cout << "Enter size of arr: ";
    cin >> n ;
    arr = inputArr(arr,n);
    ans = remov1stNegetiveWindowK(arr, n,2);
    printArr(ans, ans.size());
}