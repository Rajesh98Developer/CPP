#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the row and col of matrix: ";
    cin >> row >> col;
    // Create a 2D array
    int** matrix = new int*[row];
    for (int i=0;i<row;i++){
        matrix[i] = new int[col];
    }
    // Taking input
    cout <<"Enter the elements of matrix: ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> matrix[i][j];
        }
    }
    //Print 2D array
    for(int i=0; i<row; i++){
        cout << endl;
        for(int j=0; j<col; j++){
            cout << matrix[i][j] << " ";
        }
    }
    // Delete matrix or 2D array
    for (int i=0;i<row;i++){
        delete []matrix[i];
    }
    delete []matrix;
}