#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    vector<vector<int>> ans;
    for(int i=0; i<n ; i++){
        for(int j=i+1; j<n ; j++){
            for(int l=j+1; l<n ; l++){
                if(arr[i]+arr[j]+arr[l] == K){
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]); temp.push_back(arr[l]);
                    sort(temp.begin(),temp.end());
                    ans.push_back(temp);
                }
            }
        }
    }
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
}