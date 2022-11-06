#include <iostream>
using namespace std;

int binarySearch(long long int n){   //Return intiger squareroot
    int ans = -1;
	long long int s = 0, e = n;
    long long int mid = s+ (e-s)/2;
    
    while(s<=e){
        long long square = mid*mid;
        if (square == n) return mid;
        else if (square < n){
            ans = mid;
            s = mid+1;
        }
        else e = mid-1;
        mid = s+ (e-s)/2;
    }
    return ans;
}

double decimalPoint(int n, int precison, int floarValue){
    double factor = 1;
    double ans = floarValue;
    for(int i=0; i< precison; i++){
        factor = factor/10;
        for(double j=ans; j*j <= n; j= j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    long long int n;
    cout << "Enter the number: ";
    cin >> n;
    int floarValue = binarySearch(n);
    cout <<"Square root Intiger = "<< floarValue<<endl;
    cout<<"Exact Square root: " << decimalPoint( n, 3, floarValue);
}