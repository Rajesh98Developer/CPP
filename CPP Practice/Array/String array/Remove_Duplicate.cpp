// Remove duplicate from an unsorted array
#include<iostream>
using namespace std;

void removeDuplicates(string str){
    int i,j =0; string res;
    for(i=0; i< str.length(); i++){
        for(j=0; j< str.length(); j++){
            if(str[i] == str[j]) {
                break;
            }
        }
        if(i == j) {
            res.push_back(str[i]);
        }
    }
    cout <<"New String: " << res <<endl;
}

int main(){
    string str="";
    cout << "Enter the String: ";
    cin >> str;
    removeDuplicates(str);
}