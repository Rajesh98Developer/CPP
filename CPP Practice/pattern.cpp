#include <iostream>
using namespace std;

int main()
{
    int i,j,k,n;
    n=5;
    i=1;
    while (i<=n)
    {
        j=1;
        while(j<=n){
            if (j<=n-i){
                cout << " "<<" ";
            }
            else{
                cout << "*" <<" ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
}