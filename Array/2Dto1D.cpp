#include<bits/stdc++.h>
using namespace std;

vector<int> copy2Dto1D(vector<vector<int>> &matrix,int rows,int cols){
    vector<int> arr(rows*cols);
    int index=0;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr[index]=matrix[i][j];
            index++;
        }
    }
    return arr;
}

int main(){
    int rows,cols;
    cout<<"Enter the Rows number: \n";
    cin>>rows;
    cout<<"Enter the Colomn number: \n";
    cin>>cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout<<"Enter the matrix elements: \n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    vector<int> oneDarray=copy2Dto1D(matrix,rows,cols);

    //Printing 2D Array
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    //printing 1D Array
    for(int i=0;i<oneDarray.size();i++){
        cout<<oneDarray[i]<<" ";
    }
    return 0;
}