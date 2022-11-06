#include <iostream>
#include <vector>
using namespace std;

void Heapify(vector<int> &arr,int n, int i){
   
   int largest=i;
   int left = 2*i+1;
   int right = 2*i+2;

   if(left < n && arr[largest] < arr[left]) largest = left;
   if(right < n && arr[largest] < arr[right]) largest = right;
   if (largest != i) 
   {
       swap(arr[largest],arr[i]);
       Heapify(arr, n, largest);
   }
}

int kthlargest(vector<int> &arr, int n, int k) {
    int cnt=0; int right=n;
    if(cnt >= k) return arr[0];
    // Create max heap
    for(int i=n/2 -1; i>=0; i-- ){
        Heapify(arr, n, 0);
    }
    while(cnt < k){
        swap(arr[cnt],arr[n-1]);
        Heapify(arr, n-1, 0);
        cnt+1;
        //right-1;
    }
    
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
    int ans = kthlargest( arr, n, 3);
    
    cout << ans << " " <<endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}