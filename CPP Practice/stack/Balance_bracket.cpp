#include <iostream>
#include <stack>
using namespace std;

bool check(char st, char stak){
    if(st==')' && stak=='(') return true;
    else if(st=='}' && stak=='{') return true;
    else if(st==']' && stak=='[') return true;
    else return false;
}

bool balance_bracket(string str){
    stack<char> s;
    bool chek;
    for(int i=0;i<str.length();i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
            s.push(str[i]);
        }
        if(str[i]==')' || str[i]==']' || str[i]=='}'){
            chek= check(str[i], s.top());
            if(chek==true) s.pop();
            if(chek==false) return false;
        }
    }
    if(s.size()==0) return true;
    else return false;
}

int main(){
    string str;
    stack<char> s;
    cout <<"Enter the string: ";
    cin >> str;
    bool ans=balance_bracket(str);
    cout << "Is the brackets are balanced: "<< ans;
}