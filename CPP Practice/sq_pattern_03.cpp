#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n;
    cout << "Enter dimension: ";
    cin >> n;
    i=1;
    k=1;
    while(i<=n)
    {
        j=1;
        while(j<= n)
        {
            cout << k << " ";
            k++;
            j++;
        } 
        cout << endl;
        i++;       
    }
}