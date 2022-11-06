#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    int k='A';
    cout << "Enter dimenssion: ";
    cin >> n;
    i=1;
    while(i<=n)
    {
        j=1;
        k='A'+n-i;
        while(j<=i)
        {
            //cout << char('A'+i-1) << " ";
            //cout << char('A'+j-1) << " ";
            //cout << char('A'+i+j-2) << " ";
            //cout << char(k) << " ";
            cout << char(k+j-1) << " ";
            j++;
            //k++;
        }
        cout << endl;
        i++;
    }
}