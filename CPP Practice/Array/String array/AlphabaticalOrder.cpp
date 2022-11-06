#include <iostream>
using namespace std;

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;
    for(int i=0; i< s.length(); i++){
        for(int j=i+1; j< s.length(); j++){
            if(s[i] > s[j]) swap(s[i], s[j]);
        }
    }
    cout << s <<endl;
}