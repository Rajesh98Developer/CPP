#include <iostream>
using namespace std;

void permutation(string s, int l, int r){
    if(l==r) cout << s << " ";
    for(int i=l; i<=r; i++){
        swap(s[l],s[i]);
        permutation(s,l+1,s.length()-1);
        swap(s[l],s[i]);
    }
}

int main()
{
    string s;
    cout <<"Enter the string: ";
    cin >> s;
    permutation(s,0,s.length()-1);
}