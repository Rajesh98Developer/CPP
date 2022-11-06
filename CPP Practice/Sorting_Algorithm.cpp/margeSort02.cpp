// Devide the array into two subarray succefully till single element
// Conqure or merdge two sorted array succefully 

#include <iostream>
using namespace std;

void merge(int *Arr, int start, int end) {
    int mid = start+(end-start)/2;
	// create a temp array
	int temp[end - start + 1];

	// crawlers for both intervals and for temp
	int i = start, j = mid+1, k = 0;

	// traverse both arrays and in each iteration add smaller of both elements in temp 
	while(i <= mid && j <= end) {
		if(Arr[i] <= Arr[j]) {
			temp[k] = Arr[i];
			k += 1; i += 1;
		}
		else {
			temp[k] = Arr[j];
			k += 1; j += 1;
		}
	}

	// add elements left in the first interval 
	while(i <= mid) {
		temp[k] = Arr[i];
		k += 1; i += 1;
	}

	// add elements left in the second interval 
	while(j <= end) {
		temp[k] = Arr[j];
		k += 1; j += 1;
	}

	// copy temp to original interval
	for(i = start; i <= end; i += 1) {
		Arr[i] = temp[i - start];
	}
}

void merdgeSort(int *arr, int s,int e){
    if(s>=e) return;
    int mid = s+(e-s)/2;
    merdgeSort(arr, s, mid); // Left Part
    merdgeSort(arr, mid+1, e); // Right Part
    merge(arr, s, e);         // Merdge two sorted array
}

int main(){
    int n,a;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter element of array: ";
    for(int i=0; i<n; i++){
        cin >> a;
        arr[i]=a;
    }
    merdgeSort(arr, 0, n-1);
    cout << "Sorted array is : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}