#include<iostream>
using namespace std;

bool PerfectNumber(int n){
    int sum=0;
    for(int i=1; i<= n/2; i++){
        if(n%i == 0) sum = sum+i;
    }
    if(n == sum) return 1;
    return 0;
}
int main(){
    int start, end;
    cout<< "Enter the start number: ";
    cin >> start;
    cout<< "Enter the end number: ";
    cin >> end;

    cout << "List of Perfect Number are: ";
    for(int i= start; i <=end; i++){
        bool flag = PerfectNumber(i);
        if(flag ==1) cout << i << " ";
    }
}
