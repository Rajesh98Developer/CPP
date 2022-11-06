#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int>&st, int num){
    if(st.size()==0 || st.top()<=num){
        st.push(num);
        return;
    }
    int value=st.top();
    st.pop();
    sortedInsert(st, num); 
    st.push(value);
}

void sortStack(stack<int>& st){
    if(st.empty()) return;
    int num=st.top();
    st.pop();
    sortStack(st);
    sortedInsert(st, num);
}

int main(){
    stack<int> s;
    int n,a;
    cout <<"Enter the size of stack: ";
    cin >> n;
    cout <<"Enter the elements of stack: ";
    for(int i=0; i<n;i++){
        cin >> a;
        s.push(a);
    }
    sortStack(s);
    while(n!=0){
        cout << s.top() << " ";
        s.pop();
        n-=1;
    }
}