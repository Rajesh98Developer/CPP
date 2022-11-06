#include <iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int top;
    int size;

    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int value){
        if(top <= size){
            top+=1;
            arr[top] = value;
        }
        else cout <<"Stack is full: "<< endl;
    }
    void pop(){
        if(top >= 0) {
            cout << "Poped Element is "<< arr[top]<<endl;
            top-=1;
        }
        else cout <<"Stack is empty "<<endl;
    }
    void peak(){
        if(top >= 0) cout<<"Top element is: "<< arr[top]<< endl;
        else cout <<"Stack is empty "<<endl;
    }

    void isEmpty(){
        if(top < 0) cout <<"Stack is empty: Yes"<<endl;
        else cout <<"Stack is empty: No"<<endl;;
    }
};

int main(){
    stack s(5); // 5 is array size
    s.pop();
    s.peak();
    s.isEmpty();
    s.push(10);
    s.push(20);
    s.push(15);
    s.push(25);
    s.pop();
    s.peak();
    s.isEmpty();
}