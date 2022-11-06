#include<iostream>
using namespace std;

int main()
{
    int i=1,j,k=1,n;
    cout << "Enter the dimenssion: ";
    cin >> n;
    while(i<=n)
    {   
        j=1;
        while(j<=i)
        {
            cout << k << " ";
            j++;
            k++;
        }
        cout << endl;
        i++;
    }
}