#include <iostream>
#include <vector>
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
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    vector <int> ans;
    int i=0,j=0;
    while(i<n && j<m){
        if (arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            j++; i++;
        }
        if (arr1[i] < arr2[j]){
            i++;
        }
        if (arr1[i] > arr2[j]){
            j++;
        }
    }
    return ans;
}

int main(){
    int n,m;
    vector<int> arr1,arr2,ans;
    cout << "Enter size of arr1 and arr2: ";
    cin >> n ; cin >> m;
    arr1 = inputArr(arr1,n);
    //printArr(arr1,arr1.size());
    arr2 = inputArr(arr2,m);
   ans= findArrayIntersection( arr1, n, arr2,m);
   printArr(ans,ans.size());
}