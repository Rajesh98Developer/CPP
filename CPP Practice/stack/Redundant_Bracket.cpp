#include <iostream>
#include <stack>
using namespace std;

bool Redundant(string &str){
    stack<char> st;
    for(int i=0; i<str.size(); i++){
        char ch=str[i];
        if(ch=='(' || ch=='+' || ch=='-'||ch=='*'|| ch=='/'){
            st.push(ch);
        }
        else{
            if(ch==')'){
                bool isRedundance= true;
                while(st.top() != '('){
                    char top=st.top();
                    if(top=='+' || top=='-'||top=='*'|| top=='/'){
                        isRedundance = false;
                    }
                    st.pop();
                }
                if(isRedundance == true) return true;
                st.pop(); 
            }
        }
    }
    return false;
}

int main(){
    string str;
    cout <<"Enter the string: ";
    cin >> str;
    bool ans=Redundant(str);
    cout << "Expression is Redundant: "<<ans;
}