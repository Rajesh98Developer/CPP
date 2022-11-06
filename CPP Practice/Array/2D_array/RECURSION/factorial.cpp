#include<iostream>
using namespace std;
int factorial(int n){
    //Base Case 
    if(n==0) return 1;
    int smallerProblem = factorial(n-1); 
    int biggerProblem = n* smallerProblem;
    return biggerProblem;
    //return n*factorial(n-1);
}

int main(void){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "factorial of "<< n <<" is: "<< factorial(n);
    return 0;
}