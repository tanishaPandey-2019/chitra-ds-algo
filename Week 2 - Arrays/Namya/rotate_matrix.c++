#include<bits/stdc++.h>
using namespace std;
//take transpose of the matrix, either reverse rows or columns
int main(){
    //vector<vector<int>> matrix;
    int r, c;
    cin>>r>>c;
    int matrix[r][c];
    for(int i = 0; i < r; i++){
        vector<int> r;
        for(int j = 0; j < c; j++){
            int x;
            cin>>x; 
            matrix[i][j] = x;
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
      }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < i; j++){
            int t = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = t;

        }
    }
      for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
      }
    return 0;
}