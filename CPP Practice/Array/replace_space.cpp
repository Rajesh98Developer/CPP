// Replace space with "@40" with time comp O(n) and space comp O(n)
#include<iostream>
//#include<string>
using namespace std;

string replaceSpaces(string &str){
	int len= str.size();
    for(int i=0; i< len; i++){
        if(str[i] == ' '){
            str[i]='@';
            str.insert(i+1,"4");
            str.insert(i+2,"0");
        }
        else{
            str[i]=str[i];
        }
    }
    return str;
}

int main(){
    string str;
    cout << "Enter String: ";
    getline (cin, str);
    str = replaceSpaces(str);
    cout << "Maximum Occuring Character is: "<< str;
}