// find closest number of k in an unsorted arry
#include <iostream>
using namespace std;
 
// Function to get the closest value
int closeVal(int arr[], int N, int K)
{
    // Stores the closest value to K
    int res = arr[0];
 
    // Traverse the array
    for (int i = 1; i < N; i++) {
        if (abs(K - res) > abs(K - arr[i])) {
            res = arr[i];
        }
    }
    return res;
}
 
int main()
{
    int arr[] = { 100, 500, 400,800,200,700 };
    int K = 300;
    int N = sizeof(arr) / sizeof(arr[0]);
 
    cout << closeVal(arr, N, K);
}