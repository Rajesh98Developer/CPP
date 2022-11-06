// find the number of pairs whose sum is equal to k

#include <iostream>
#include <unordered_map>
using namespace std;

int No_ofPairSum(int arr[], int n, int sum){
    unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (m.find(sum - arr[i]) != m.end()) {          //int arr[4]={1,5,7,-1}
            count += m[sum - arr[i]];
        }
        m[arr[i]]++;
    }
    return count;
}

// int No_ofPairSum(int arr[], int n, int sum){
//     sort(arr, arr + n);
//     int cnt=0;
//     //unordered_map<int, int> count;
//     //for(int i=0;i<n;i++) count[arr[i]]++;
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j] == sum){
//             cnt++;
//             }
//         }
//     }
//    return cnt;
// }

int main(){
    int arr[4]={1,5,7,-1};
    int sum = 6;
    int ans = No_ofPairSum( arr, 4, sum);
    cout << "Numbers of pair have sum equal to "<< sum <<" is " << ans;
}