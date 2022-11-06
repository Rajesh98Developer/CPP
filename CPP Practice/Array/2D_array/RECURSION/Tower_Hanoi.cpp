#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> towerOfHanoi(int n,int a,int c,int b,vector<vector<int>>& res)
{
   if(n == 0) return res;
   // recursion using deep function.
   towerOfHanoi(n-1, a,b,c, res);   // move the n-1 disk to c by taking the help of b
   res.push_back({a,c});      // store in res
   towerOfHanoi(n-1,b,c,a,res);   // again move n-1 disk to b by taking the help of c
   return res;
}

int main(){
    vector<vector<int>> res;
    int n=3;
    res=towerOfHanoi(n,1,3,2,res);
    int row = res.size(); int col = res[0].size();
    for(int i=0; i<row; i++){
        cout << endl;
        for(int j=0; j<col; j++)
        cout << res[i][j] << " ";
    }
}