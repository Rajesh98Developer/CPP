#include <iostream>
#include<stack>
using namespace std;

void decToBinary(int num){
    stack<bool> res;
    while(num != 0){
        res.push(bool(num%2));
        num=num/2;
    }
    while(!res.empty()){
        cout << res.top();
        res.pop();
    }
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>> num;
    decToBinary(num);
}