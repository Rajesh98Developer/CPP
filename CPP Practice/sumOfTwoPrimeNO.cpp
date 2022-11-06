#include <iostream>
using namespace std;

bool isPrime(int);
void isSumOfTwoPrimeNum(int);

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    isSumOfTwoPrimeNum(n);
}

bool isPrime(int n){
    int flag=0;
    for(int i=2; i<= n/2; i++){
        if(n%i==0){
            flag =1;
            break;
        }
    }
    if(flag == 1) return 0;
    else return 1;
}

void isSumOfTwoPrimeNum(int n){
    int flag=0;
    for(int i=2; i <= n/2; i++){
        if(isPrime(i)){
            if(isPrime(n-i)){
                flag=1;
                cout <<n<<" is sum of "<<i<<" and "<< n-i << endl;
            }
        }
    }
    if (flag == 0) cout << "Not avail sum of two prime number";
}