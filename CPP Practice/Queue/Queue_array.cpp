#include<iostream>
using namespace std;

class queue{
    int defaultsize,face,rear;
    int *arr;
    public:
        queue(){
            defaultsize = 100001;
            int *arr = new int[defaultsize];
            face=0; rear=0;
        }
        void push(int val){
            if(rear == defaultsize){
                cout <<"Queue is full"<<endl;
            }
            else{
                arr[rear]=val;
                rear+=1;
            }
        }
        void pop(){
            if(face==rear){
                cout<< "Queue is empty"<<endl;
            }
            else{
                arr[face]=-1;
                face++;
                if(face == rear){
                    face=0; rear=0;
                }
            }
        }
        int front(){
            if(face == rear) return -1;
            else return arr[face];
        }
        int back(){
            if(face == rear) return -1;
            else return arr[rear-1];
        }
        bool empty(){
            if(face==rear) return 1;
            else return 0;
        }
        int size(){
            if(face==rear) return 0;
            return rear-face+1;
        }
};

int main(){
    queue q;
    cout << q.size()<<endl;
    cout << q.empty() << endl;
    q.pop();
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.pop();
    cout << q.front() <<endl;
    cout << q.back()<< endl;
    return 0;
}