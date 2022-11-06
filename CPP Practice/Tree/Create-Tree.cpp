#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* BuildTree(node* root){
    cout<<"Enter thr data: ";
    int data;
    cin>> data;
    root = new node(data);
    if(data==-1) return NULL;

    cout<<"Enter the left data of "<<data<<": ";
    root->left = BuildTree(root->left);
    cout<<"Enter the right data of "<<data<<": ";
    root->right = BuildTree(root->right);
    return root;
}

int main(){
    node* root=NULL;
    BuildTree(root);
    return 0;
}