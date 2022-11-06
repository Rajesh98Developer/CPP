#include<iostream>
using namespace std;

int main(){
    int a=1431;
    float b=14.31;
    double c=14.34;
    char d='R';
    bool e=1;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    int size=sizeof(e);
    cout << "size of e is: " << size << endl;

}