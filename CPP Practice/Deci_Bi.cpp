// This code cant convert decimal number morethan 1023 
// as bi is a intiger number # So try with string ao array
#include <iostream>
#include "math.h"
using namespace std;

int main()
{
    int num,bit,bi,i;
    num=1023;
    bi=0;i=0;
    //Decimal to Binary conversion
    while(num != 0){
        bit = num & 1;
        // bit = num % 10;
        bi = bit * pow(10,i) + bi;
        i++;
        num = num >> 1;
        // num = num/2;
    }
    cout << "Binary expression: " << bi;
    //Binary to Decimal conversion

}