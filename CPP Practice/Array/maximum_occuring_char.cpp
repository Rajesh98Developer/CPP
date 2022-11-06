#include<iostream>
#include<string>
using namespace std;

char maxOccurChar(string &s){
    int arr[26]={0}; int num;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            num = s[i]-'a';
        }
        if(s[i]>='A' && s[i]<='Z'){
            num = s[i]-'A';
        }
        arr[num]++;
    }
    int maxi=0, ans=0;
    for(int j=0; j<26; j++){
        if(arr[j] > maxi) {
            maxi=arr[j];
            ans = j;
        }
    }
    return char('a' + ans);
}

int main(){
    string s; char ch;
    cout << "Enter String: ";
    getline (cin, s);
    ch = maxOccurChar(s);
    cout << "Maximum Occuring Character is: "<< ch;
}