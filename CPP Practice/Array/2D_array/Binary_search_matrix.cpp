#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<vector<int>> &matrix, int target){

    int row = matrix.size();
    int col = matrix[0].size();
    int eIndex = (row*col)-1;
    int sIndex = 0;
    int mid = sIndex + (eIndex-sIndex)/2;
    while (sIndex <= eIndex){
        int element = matrix[mid/col][mid%col];
        if (element == target) return 1;
        if(element < target) sIndex = mid+1;
        else eIndex = mid-1;
        mid = sIndex + (eIndex-sIndex)/2;
    }
    return 0;
}

int main(){
    
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    /* 
    int row, col;
    cout<< "Enter size of matrix row and col: ";
    cin >> row >> col;
    vector<vector<int>> matrix(row, vector<int> (col));
    cout << "Enter the matrix element: ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> matrix[i][j];
        }
    } */
    cout << binarySearch(matrix, 3) ;
}