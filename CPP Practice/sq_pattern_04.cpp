#include<iostream>
using namespace std;

int main()
{
    int i=1,j,n;
    cout << "Enter the dimenssion: ";
    cin >> n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            //cout << char('A'+i-1) << " ";
            //cout << char('A'+j-1) << " ";
            cout << char('A'+i+j-2) << " ";
            j++;
        }
        cout << endl;
        i++;

    }
}