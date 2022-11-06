#include<iostream>
using namespace std;

bool prime(int n){
    if(n==0 || n==1) return false;
    for(int i=2; i<n/2; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    int n,i,flag;
    cout << "Enter a number: ";
    cin >> n;
    flag=0;
    for ( i=2;(i <= n/2);i++){
        if (n%i == 0){
            cout << n << " is not a prime number"<<endl;
            flag=1;
            break;
        }
    }
    if (flag == 0){
        cout << n << " is a prime number "<< endl;
    }
    if (prime(n)){
        cout << n << " is a prime number "<< endl;
    }
    else cout<<"It is not a prime number: "<<endl;
}