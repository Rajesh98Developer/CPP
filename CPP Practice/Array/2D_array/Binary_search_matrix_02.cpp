#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<vector<int>> &matrix, int target){

    int row = matrix.size();
    int col = matrix[0].size();
    int colIndex = col-1;
    int rowIndex = 0;
    while (rowIndex < row && colIndex >=0){
        int element = matrix[rowIndex][colIndex];
        if (element == target) return 1;
        if(element < target) rowIndex++;
        else colIndex--;
    }
    return 0;
}

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{2,4,6,8},{9,11,13,15},{10,12,14,16}};
    cout << binarySearch(matrix, 3) ;
}