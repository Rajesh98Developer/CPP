#include<iostream>
#include<string>
using namespace std;

void reverse(string &str, int i, int j){
    int s=i, e=j-1;
    while(s<e){
        swap(str[s++], str[e--]);
    }
} 

int main(){
    string s;
    cout << "Enter your name: ";
    getline (cin, s);
    int l= s.size();
    int i=0;
    for(int j=0; j<=l; j++){
        if(s[j]==' ' || s[j]=='\0'){
            reverse(s, i, j);
            i=j+1;
        }
    } 
    cout << "Reversed name is "<< s;
}