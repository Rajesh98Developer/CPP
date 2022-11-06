#include <iostream>
//#include "math.h"
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r){
    int ans;
    ans = factorial(n) / (factorial(r) * factorial(n-r));
    return ans;
}
int main ( ){
    int n,r,ans;
    cout << "Enter the n value: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    ans = nCr(n,r);
    cout << "Combination value is : "<<ans;
}