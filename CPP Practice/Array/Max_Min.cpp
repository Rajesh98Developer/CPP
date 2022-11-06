#include <iostream>
using namespace std;

int getMax(int *arr, int size){
    int maxi = INT_MIN;
    for (int i=0; i < size; i++){
        //if (arr[i] > maxi) maxi = arr[i];
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}

int getMin(int *arr, int size){
    int mini = INT_MAX;
    for (int i=0; i < size; i++){
        //if (arr[i] < mini) mini = arr[i];
        mini = min(mini,arr[i]);
    }
    return mini;
}

int main(){
    int size;
    int max,min;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter Elements of array: ";
    for (int i=0; i < size; i++){
        cin >> arr[i];
    }

    max = getMax(arr,size);
    min = getMin(arr,size);
    
    cout << "Max number of array is: "<< max << endl;
    cout << "Min number of array is: "<< min;
}