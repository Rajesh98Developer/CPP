//print 1 to n and n to 1
#include<iostream>
using namespace std;
void tailRecursion(int n){
    if(n==0) return;
    cout << n <<" ";
    tailRecursion(n-1);
}
void headRecursion(int n){
    if(n==0) return;
    headRecursion(n-1);
    cout << n <<" ";
}

int main(void){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    tailRecursion(n);
    cout << endl;
    headRecursion(n);
    return 0;
}