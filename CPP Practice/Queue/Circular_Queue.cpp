// Only push operation is diferent than normal queue

#include<iostream>
using namespace std;

class queue{
    int defaultsize,face,rear;
    int *arr;
    public:
        queue(){
            defaultsize = 5;
            int *arr = new int[defaultsize];
            face=0; rear=0;
        }
        void push(int val){
            if((face==0 && rear ==defaultsize-1)){
                cout <<"Queue is full"<<endl;
            }
            else if(rear =defaultsize-1 && face !=0){
                rear=0;
                arr[rear]= val;
            }
            else{
                arr[rear]=val;
                rear++;
            }
        }
        void pop(){
            if(face==0){
                cout<< "Queue is empty"<<endl;
            }
            arr[face]=-1;
            if(face==rear){
                face=rear=0;
            }
            else if(face==rear-1){
                face=0;
            }
            else face++;
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
    q.push(10);
    //q.pop();
    cout << q.front() <<endl;
    cout << q.back()<< endl;
    return 0;
}