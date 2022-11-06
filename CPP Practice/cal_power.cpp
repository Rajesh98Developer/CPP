// if(n&1 == 0) n is even
// if (n^1) > n+1 then n is even
// if (n|1) > n then n is even
#include<iostream>
using namespace std;

int Power(int base,int exp){
    if(exp == 0) return 1;
    else if(exp%2 == 0) return Power(base, exp/2)*Power(base, exp/2);
    else return base*Power(base, exp/2)*Power(base, exp/2);
}
int main(){
    int base,exp;
    cout<<"Enter the base and power value: ";
    cin>>base>>exp;
    int ans = Power(base,exp);
    cout<<"Power of "<<base<<" and "<<exp<<" is :"<<ans;
}