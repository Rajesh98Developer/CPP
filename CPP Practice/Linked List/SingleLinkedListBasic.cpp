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
            this-> next = NULL;
        }
        cout << "Memory free: "<< value << endl;
    }
};

void InsertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp-> next = head;
    head = temp;
}
void InsertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail-> next = temp;
    tail = temp;
}
void InsertAtPosition(node* &tail,node* &head,int position, int d){
    if(position == 1){
        InsertAtHead(head,d);
        return;
    }
    node* temp = head;
    int cnt =1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp-> next == NULL){
        InsertAtTail(tail, d);
        return;
    }
    node* nodeToInsert = new node(d);
    nodeToInsert-> next = temp-> next;
    temp-> next = nodeToInsert;
}
void deleteNode(node* &head, int position){
    if(position ==1){
        node* temp= head;
        head = head-> next;
        temp-> next = NULL;
        delete temp;
    }
    else{
        node* curr = head;
        node* prev = NULL;
        int cnt=1;
        while(cnt < position){
            prev =curr;
            curr= curr->next;
            cnt++;
        }
        prev-> next = curr-> next;
        curr-> next = NULL;
        delete curr;
    }
}
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp-> data << " ";
        temp = temp-> next;
    }
    cout << endl;
}
int main(){
    node* node1 = new node(10);
    cout << node1-> data << endl;
    cout << node1-> next << endl;
    node* head = node1;
    node* tail = node1;
    InsertAtHead(head, 20);
    InsertAtHead(head, 30);
    print(head);
    InsertAtTail(tail, 20);
    InsertAtTail(tail, 30);
    print(head);
    InsertAtPosition(tail,head, 6, 40);
    print(head);
    deleteNode(head,3);
    print(head);
}