#include <iostream>
#include<vector>
using namespace std;

// void merge(vector<int> &arr, int s,int e){
//     int mid = s+(e-s)/2;
//     int len1 = mid-s+1;
//     int len2 = e-mid;
//     int *first = new int[len1];
//     int *second = new int[len2];
//     int mainIndex = s;
//     for (int i=0; i<len1;i++){
//         first[i] = arr[mainIndex++];
//     }
//     int k=mid+1;
//     for (int i=0; i<len2;i++){
//         second[i] = arr[mainIndex++];
//     }

//     int index1=0; int index2=0;
//     mainIndex=s;
//     while(index1 < len1 && index2 < len2){
//         if(first[index1]<second[index2]) 
//             arr[mainIndex++] = first[index1++];
//         else arr[mainIndex++] = second[index2++];
//     }
//     while(index1 < len1){
//         arr[mainIndex++] = first[index1++];
//     }
//     while(index2 < len2){
//         arr[mainIndex++] = second[index2++];
//     }

//     delete []first; delete []second;
// }

void merge(vector<int> &Arr, int start, int end) {
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

void merdgeSort(vector<int> &arr, int s,int e){
    if(s>=e) return;
    int mid = s+(e-s)/2;
    merdgeSort(arr, s, mid); // Left Part
    merdgeSort(arr, mid+1, e); // Right Part
    merge(arr, s, e);         // Merdge two sorted array
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
    merdgeSort(arr, 0, n-1);
    cout << "Sorted array is : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}