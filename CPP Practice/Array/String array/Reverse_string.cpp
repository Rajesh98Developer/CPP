#include<iostream>
#include <stack>
using namespace std;

void reverse(string &name, int len){
    stack<string> temp;
    string word="";
    for(int i=0; i<len; i++){
        if(name[i]==' '){
            temp.push(word);
            word="";
        }
        else word+=name[i];
    }
    temp.push(word);
    cout << "Reversed name is : ";
    while(!temp.empty()){
        cout<< temp.top() << " ";
        temp.pop();
    }
}
  
int main(){
    string name;
    cout<< "Enter the string: ";
    getline(cin, name);
    reverse(name, name.length());
}