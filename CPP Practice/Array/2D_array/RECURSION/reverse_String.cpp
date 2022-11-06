#include<iostream>
using namespace std;

void reverse(string& name,int s,int e){
    if(s>=e) return;
    swap(name[s++],name[e--]);
    reverse(name,s,e);
}

bool checkPalindrom(string& str,int s){
    int e=str.size()-1-s;
    if(s>=e) return true;
    if(str[s++]==str[e])
        checkPalindrom(str,s);
    else return false;
}

int main(){
    cout << "Enter your name: ";
    string str;
    getline(cin, str);
    reverse(str,0,str.size()-1);
    cout << str <<endl;
    cout << "This string is palindrom: "<<checkPalindrom(str,0);
    return 0;
}