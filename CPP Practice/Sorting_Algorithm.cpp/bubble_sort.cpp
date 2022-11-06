// apply for loop from 0 to n-1,swap adajacent element
// Do above for n times

#include <iostream>
#include <vector>
using namespace std;

vector<int> BubbleSort(vector <int> &arr, int n){
    for (int i=0; i<n; i++){
        bool swapped = false;
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) break; //This line makes best time complexity to O(n)
        //n-=1;            // Don't Use this
    }
    return arr;
}

int main(){
    int n,a;
    vector<int> arr;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter element of array: ";
    for(int i=0; i<n; i++){
        cin >> a;
        arr.push_back(a);
    }
    arr = BubbleSort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}