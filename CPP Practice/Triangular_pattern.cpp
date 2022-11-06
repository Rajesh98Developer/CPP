#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout <<"Enter the dimenssion: ";
    cin >> n;
    // Right angle triangle pattern
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            //cout << j <<" ";
            //cout << n-j+1 <<" ";
            cout << i-j+1 <<" ";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;
    // pattern -02
    i=n;
    while(i>0){
        j=1;
        while(j<=i){
            cout << j <<" ";
            //cout << n-j+1 <<" ";
            j++;
        }
        cout << endl;
        i--;
    }
    cout << endl;
    // pattern -03
    i=1;
    while(i<=n){
        j=i;
        while(j>0){
            cout << j <<" ";
            //cout << n-j+1 <<" ";
            j--;
        }
        cout << endl;
        i++;
    }
    cout << endl;
    //pattern=04
    i=n;
    while(i>0){
        j=i;
        while(j>0){
            cout << j <<" ";
            //cout << n-j+1 <<" ";
            j--;
        }
        cout << endl;
        i--;
    }
}