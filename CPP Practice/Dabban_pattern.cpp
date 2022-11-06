#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    n=5;
    i=1;
    /*
    while (i<=n)
    {
        j=1;
        while(j<=n-i+1){
            cout<< j << " ";
            j++;
        }
        j=1;
        while(j <= (i-1)*2){
            cout << "*" << " ";
            j++;
        }
        j=1;
        while(j<=n-i+1){
            cout << n-i-j+2 << " ";
            j++;
        }
        cout <<endl;
        i++;
    }   */
    while(i<=n)
    {
        j=1;
        while(j<=2*n){
            if (j<=n-i+1){
            cout<< j << " ";
            j++;
            }
            
            if(j > (n-i+1) && j<= (n+i-1)){
               cout<< "*" << " ";
                j++; 
            }
            
            if (j<=2*n){
            cout<< 2*n-j+1 << " ";
            j++;
            } 
        }
        cout << endl;
        i++;
    }
}