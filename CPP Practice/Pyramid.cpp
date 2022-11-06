#include <iostream>
using namespace std;

int main ()
{
    int i,j,n;
    n=5;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=n-i)
        {
            cout <<" " << " ";
            j++;
        }
        while(j<=n)
        {
            cout << i+j-n << " ";
            j++;
        }
        while(j<=n+i-1)
        {
            cout<< n+i-j <<" ";
            j++;
        } 
        cout<<endl;
        i++;
    }

}