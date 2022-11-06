#include <iostream>
using namespace std;

class node{     // create a node class for linked list
    public:
    int data;
    node* next;
    node* prev;

    node(int data){
        this-> data = data;
        this-> next = NULL;
        this-> prev = NULL;    
    }
    ~node(){
        int value = this-> data;
        if(this-> next != NULL){
            delete next;
            this-> next = NULL;
            this-> prev = NULL;
        }
        cout << "Memory free: "<< value << endl;
    }
};

void InsertAtHead(node* &head,node* &tail, int d){
    if(head == NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(d);
        temp-> prev = NULL;
        head-> prev =temp;
        temp-> next = head;
        head = temp;
    }
}
void InsertAtTail(node* &head,node* &tail, int d){
    if(head == NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(d);
        tail-> next = temp;
        temp-> prev = tail;
        tail = temp;
    }
}
void InsertAtPosition(node* &head,node* &tail,int position, int d){
    if(position == 1){
        InsertAtHead(head, tail,d);
        return;
    }
    node* temp = head;
    int cnt =1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp-> next == NULL){
        InsertAtTail(head, tail, d);
        return;
    }
    node* nodeToInsert = new node(d);
    nodeToInsert-> next = temp-> next;
    temp-> next-> prev = nodeToInsert;
    temp-> next = nodeToInsert;
    nodeToInsert-> prev = temp;
}
void deleteNode(node* &head, int position){
    if(position ==1){
        node* temp= head;
        head = temp-> next;
        head-> prev = NULL;
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
        curr-> prev = NULL;
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
int getLength(node* &head){
    int len=0;
    node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp-> next;
    }
    return len;
}
int main(){
    // node* node1 = new node(10);
    // cout << node1-> data << endl;
    // cout << node1-> next << endl;
    // cout << node1-> prev << endl;
    node* head = NULL;
    node* tail = NULL;
    InsertAtHead(head, tail,20);
    InsertAtHead(head, tail,30);
    print(head);
    InsertAtTail(head, tail, 20);
    InsertAtTail(head, tail, 30);
    print(head);
    InsertAtPosition(head, tail, 1, 40);
    print(head);
    deleteNode(head,5);
}