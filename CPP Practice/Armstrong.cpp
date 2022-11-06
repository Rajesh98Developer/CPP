#include <iostream>
#include "math.h"
using namespace std;

int Armstrong(int num, int digit){
    if(num==0) return 0;
   return (pow(num%10,digit)+Armstrong(num/10,digit));  
}

int main(){
    cout<<"Enter a number: ";
    int num;
    cin >> num;
    int digit=(int) log10(num)+1;
    if( Armstrong(num, digit)!=num) cout<< num<< " is not a armstrong number: "<<endl;
    else cout<< num<< " is armstrong number: ";
}