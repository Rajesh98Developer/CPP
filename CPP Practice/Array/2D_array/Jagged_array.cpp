#include<iostream>
using namespace std;

int main(){
    // static memory allocation 
    // 2D array with different column size
    int jagged1[][5]={{1,2,3,4},{4,5,6},{7,8,9,1,0},{5}};
    int** jagged2 = new int*[3];
    int col=0;
    int i=0;
    while(i<3){
        cout << "Enter col size of "<< i<<"th row: ";
        cin >> col;
        int* arr = new int[col];
        cout <<"Enter the value of "<< i<<"th row :";
        for(int j=0; j<col;j++){
            cin >> jagged2[i][j];
        }
        i++;
    }
    //Print 2D array
    for(int i=0; i<3; i++){
        cout << endl;
        for(int j=0; j<col; j++){
            cout << jagged2[i][j] << " ";
        }
    }
    // Delete matrix or 2D array
    for (int i=0;i<3;i++){
        delete []jagged2[i];
    }
    delete []jagged2;
}