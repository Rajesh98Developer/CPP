#include <iostream>
#include <stack>
using namespace std;

void InsertAtBottom(stack<int>&st, int num){
    if(st.size()==0){
        st.push(num);
        return;
    }
    int value=st.top();
    st.pop();
    InsertAtBottom(st, num);
    st.push(value);
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

    InsertAtBottom(s, 8);
    n=n+1;
    while(n!=0){
        cout << s.top() << " ";
        s.pop();
        n-=1;
    }
}