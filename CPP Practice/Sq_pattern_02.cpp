#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout <<"Enter the dimenssion of matrix: ";
    cin >> n;
    // Basic pattern
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout << i <<" ";
            //cout << n-i+1 <<" ";   // For reverse pattern
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;
    
    // Row sequence
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout << j <<" ";
            //cout << n-j+1 <<" ";   // Reversed
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;
}
