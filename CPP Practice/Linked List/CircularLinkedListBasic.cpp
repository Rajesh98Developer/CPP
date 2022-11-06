#include <iostream>
using namespace std;

class node{     // create a node class for linked list
    public:
    int data;
    node* next;

    node(int data){
        this-> data = data;
        this-> next = NULL;    
    }
    ~node(){
        int value = this-> data;
        if(this-> next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory free: "<< value << endl;
    }
};

void InsertNode(node* &tail,int element, int d){
    if(tail == NULL){
        node* newNode = new node(d);
        tail = newNode;
        newNode-> next = newNode;
    }
    else{
        node* curr = tail;
        while(curr-> data != element){
            curr = curr->next;
        }
        node* newNode = new node(d);
        newNode-> next = curr-> next;
        curr-> next = newNode;
    }
}
void deleteNode(node* &tail, int value){
    if(tail == NULL){
        cout << " List is Empty"<< endl;
        return;
    }
    else{
        node* prev = tail;
        node* curr = prev-> next;
        while(curr-> data != value){
            prev = curr;
            curr = curr-> next;
        }
        prev-> next = curr-> next;
        if(curr = prev){ // For Single Node
            tail = NULL;
        }
        else if(tail == curr){ // To delete Node at Tail
            tail = prev;
        }
        curr-> next = NULL;
        delete curr;
    }
}
void print(node* tail){
    node* temp = tail;
    if(tail == NULL){
        cout<< " List is Empty";
    }
    else{
        do{
            cout << tail-> data << " ";
            tail = tail-> next;
        } while(tail != temp);
    }
    cout << endl;
}
int main(){
    node* tail = NULL;
    InsertNode(tail,10,10);
    print(tail);
    InsertNode(tail,10,20);
    print(tail);
    InsertNode(tail,20,30);
    InsertNode(tail,30,40);
    InsertNode(tail,20,50);
    print(tail);
    deleteNode(tail,50);
    print(tail);
}