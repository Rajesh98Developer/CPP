#include <iostream>
#include <stack>
using namespace std;

void deleteMiddle(stack<int>&inputStack, int n, int cnt){
    if(cnt==n/2){
        inputStack.pop();
        return;
    }
    int num=inputStack.top();
    inputStack.pop();
    deleteMiddle(inputStack, n,cnt+1);
    inputStack.push(num);
}


// void deleteMiddle(stack<int>&inputStack, int N){
// 	int mid=N/2;
// 	stack<int> s;
// 	int cnt=0;
// 	while(cnt<=mid){
// 		if(cnt==mid) {
// 			inputStack.pop();
// 			break;
// 		}
// 		else{
// 			s.push(inputStack.top());
// 			inputStack.pop();
// 			cnt+=1;
// 		}
// 	}
// 	while(cnt!=0){
// 		inputStack.push(s.top());
// 		s.pop();
// 		cnt-=1;
// 	}
// }

int main(){
    stack<int> s;
    int n,a;
    cout <<"Enter the size of stack: ";
    cin >> n;
    cout <<"Enter the elements of stack: ";
    for(int i=0; i<n;i++){
        cin >> a;
        s.push(a);
    }
    //deleteMiddle(s, n);
    deleteMiddle(s, n,0);
    n=n-1;
    while(n!=0){
        cout << s.top() << " ";
        s.pop();
        n-=1;
    }
}