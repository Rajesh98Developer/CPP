#include<iostream>
using namespace std;

int fibonacci(int n){
    //Base Case 
    if(n==0 || n==1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(void){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "fibonacci of "<< n <<"th number is: "<< fibonacci(n);
    return 0;
}