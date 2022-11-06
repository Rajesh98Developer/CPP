/*Given an array ‘arr’ of integer numbers . where ‘arr[i]’ represents the number of pages in the ‘i-th’ book. There are ‘m’ number of students and the task is to allocate all the books to their students. Allocate books in such a way that:
1. Each student gets at least one book.
2. Each book should be allocated to a student.
3. Book allocation should be in a contiguous manner.
You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum. */
#include <iostream>
#include <vector>
using namespace  std;

bool isPossible(vector<int> arr, int n, int m, int mid){
    int studentCount = 1; int pageSum = 0;
	for (int i=0; i < n; i++){
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else{
        	studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
	}
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int min=0, sum=0;
    int ans = -1;
    for (int i=0; i<n; i++){
        sum += arr[i];
    }
    int max = sum;
    int mid = min + (max-min)/2;
    
    while(min <= max){
        if(isPossible( arr, n, m, mid)){
            ans = mid;
            max = mid-1;
        }
        else {
            min = mid +1;
        }
        mid = min + (max-min)/2;
    }
    return ans;
}

int main(){
    int n,m,val; // n= no of books and m = no of student
    vector<int> arr; // val = no of pages of books
    cout << "Enter number of books and student: ";
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cout << "Enter total pages of "<<i<<"th book = ";
        cin >> val;
        arr.push_back(val);
    }
    cout << allocateBooks( arr, n, m);
}