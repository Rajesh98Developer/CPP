#include<iostream>
using namespace std;

int main()
{
    int i=1,j,k,n=5;
    // method-01 using extra variable k
    while(i<=n)
    {
        j=1;
        k=i;
        while(j<=i)
        {
            cout << k << " ";
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
    // method-02 without using extra variable k
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout << i << " ";
            j++;
            i++;
        }
        cout << endl;
    }
}