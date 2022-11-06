#include <iostream>
#include "math.h"
using namespace std;

int main()

{
    int n,sum;
    cout << "Enter the binary number: ";
    cin >> n;
    int i=0;
    while(n!=0)
    {
        int digit = n % 10;
        if (digit==1){
        sum = sum + pow(2,i);
        }
        n = n / 10;
        i++;
    }
    cout << "Decimal number is: "<< sum;
}