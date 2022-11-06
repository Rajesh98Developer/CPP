#include <iostream>
#include "math.h"
using namespace std;

int main(){
    int a,b;
    char ch;
    cout << "Enter the 1st number: ";
    cin >> a;
    cout << "Enter the 2nd number: ";
    cin >> b;
    cout << "Enter the sign: ";
    cin >> ch;

    switch (ch){
        case '+': cout << (a+b) ;
        break;
        case '-': cout << (a-b) ;
        break;
        case '/': cout << (a/b) ;
        break;
        case '%': cout << (a%b) ;
        break;
        case '^' : cout << pow (a,b) ;
        break;

    }
}