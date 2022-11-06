#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr;
    arr={1,5,3,6,5,8,3,9,4,0,1,2,5,7};
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    for (int i=0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}