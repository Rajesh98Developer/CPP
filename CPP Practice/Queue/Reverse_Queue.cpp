#include <iostream>
#include <stack>
#include <queue>
using namespace std;

//  Using stack
// void reverse(queue<int>&q){
//     stack<int> st;
//     int a;
//     while(!q.empty()){
//         a=q.front();
//         q.pop();
//         st.push(a);
//     }
//     while(!st.empty()){
//         a=st.top();
//         st.pop();
//         q.push(a);
//     }
// }

void reverse(queue<int>&q){  // Recursion 
    if(q.empty()) return;
    int a=q.front();
    q.pop();
    reverse(q);
    q.push(a);
}

int main(){
    int l;
    cout <<"Enter the length of queue: ";
    cin >> l;
    queue<int> q;
    cout <<"Enter the elements of queue: ";
    for(int i=0; i<l; i++){
        int a;
        cin>> a;
        q.push(a);
    }
    reverse(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

}