#include<iostream>
using namespace std;

int main()
{
    char x;
    cout << "Enter a charcter: ";
    cin >> x;
    int a ='a',b ='z',c='A',d='Z';
     cout << c << endl;
    if ( a <= x <= b){
        cout << "This is a lower case" << endl;
    }
    if ( c <= x <= d){
        cout << "This is a upper case" << endl;
    } 
}