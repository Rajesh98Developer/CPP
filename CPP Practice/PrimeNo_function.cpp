#include <iostream>
using namespace std;

bool ifPrime(int n){
    int rem;
    for (int i=2; i <= n/2; i++){
        rem = n%i;
        if (rem == 0){
            return 1;
            break;
        }
    }
    return 0;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    bool a;
    a = ifPrime(n);
    if (a){
        cout << n << " is not a prime number";
    }
    else cout << n << " is a prime number";
}