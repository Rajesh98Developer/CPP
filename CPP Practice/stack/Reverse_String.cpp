#include <iostream>
#include <stack>
using namespace std;

int main(){
    string str;
    stack<char> s;
    cout <<"Enter the string: ";
    cin >> str;
    for(int i=0; i<str.length();i++){
        s.push(str[i]);
    }
    string ans="";
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    cout << "Reverse String is: "<< ans;
}