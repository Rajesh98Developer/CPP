#include <iostream>
using namespace std;

int findGcd(int a, int b);
int findGcdN(int arr[],int n);

int main(){
    int arr[4],ans;
    cout<<"Enter value of Numbers : ";
    for(int i; i< 4; i++){
        cin >> arr[i];
    }
    ans = findGcd(arr[0],arr[1]);
    cout << "GCD of all numbers is : " << ans;
}

int findGcdN(int arr[],int n){
    int g = findGcd(arr[0], arr[1]);
    for(int i=2; i< n; i++){
        g = findGcd(g, arr[i]);
    }
    return g;
}
int findGcd(int a, int b){
    if(b==0) return a;
    else return findGcd(b, a%b);
}

// int GCD(int a, int b){
//     if(a == 0) return b;
//     if(b == 0) return a;
//     if(a > b) return GCD(a-b,b);
//     if(a <= b) return GCD(b-a, a);
//     return 0;
// }
