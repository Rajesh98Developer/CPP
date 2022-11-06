#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <='z' || ch >= '0' && ch <='9')
        return ch;
    if(ch >= 'A' && ch <='Z') 
        return (ch -'A'+'a');
}

bool validCharacter(char ch){
	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9'){
        return 1;
    }
    return 0;
}

bool checkPalindrome(string s)
{
    int st = 0, e = s.size()-1;
    while(st < e){
        if(toLowerCase(s[st]) != toLowerCase(s[e])) {
            return 0;
        }
        else {
            st++; e--;
        }
    }
    return 1;
}


int main(){
    string s;
    cout << "Enter your name: ";
    cin >> s;
    string temp = "";
    for(int i=0; i< s.size(); i++){
        if(validCharacter(s[i])){
            temp.push_back(s[i]);
        }
	}
    for (int j=0; j< temp.size(); j++){
       temp[j] = toLowerCase(temp[j]);
    }  
    cout << "string is palindrome: "<< checkPalindrome(temp);
}