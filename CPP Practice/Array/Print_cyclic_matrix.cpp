#include<iostream>
using namespace std;

int main(){

    int matrix[4][3]={0};
    cout << "Enter the matrix: ";
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin >> matrix[i][j];
        }
    }

    int rStart=0,cStart=0;
    int rEnd=4,cEnd=3;
    int row=0, col=0;
    while(rStart < rEnd && cStart < cEnd){
        // Print 1st row
        for(col=cStart; col<cEnd;col++){
            cout << matrix[rStart][col] << " ";
        }
        // Print last column
        rStart++;
        for(row=rStart; row<rEnd; row++){
            cout << matrix[row][cEnd-1] << " ";
        }
        // Print last row end to start
        cEnd--;
        for(col=cEnd-1; col>=cStart; col--){
            cout << matrix[rEnd-1][col] << " ";
        }
        // Print 1st Column in bottom to top
        cStart++;
        rEnd--;
        for(row=rEnd-1; row>=rStart; row--){
            cout << matrix[row][cStart-1] << " ";
        }
    } 
    /*
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }   */
    
}