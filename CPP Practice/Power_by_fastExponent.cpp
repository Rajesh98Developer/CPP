#include <iostream>
using namespace std;


long long int power(int base, int exp){
    long long int res;
    if(exp==0) return 1;
    else if(exp==1) return base;
    else{
        res=power(base, exp/2);
        if(exp&1==0) return res*res;
        else return res*res*base;
    }
}
int main(){
    int base,exp;
    cout << "Enter the base and exponent: ";
    cin >> base >> exp;
    long long int ans= power(base, exp);
    cout << ans <<" ";
}