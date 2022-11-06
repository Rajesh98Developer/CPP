#include <iostream>
using namespace std;

int main(){
    int n,arr[100];
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter eement of array: ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    for (int i=1; i<n; i+=2){
        swap (arr[i], arr[i-1]);
    }
    cout << " Swaped array is: ";
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}