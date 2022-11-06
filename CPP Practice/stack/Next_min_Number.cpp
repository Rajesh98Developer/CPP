#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> FindNextElemnt(vector<int> &arr, int n){
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);
    for(int i=n-1; i>=0; i--){
        int num=arr[i];
        while(num <= st.top()){
            st.pop();
        }
        ans[i]=st.top();
        st.push(num);
    }
    return ans;
}

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    cout <<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> ans=FindNextElemnt(arr, n);
    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
}