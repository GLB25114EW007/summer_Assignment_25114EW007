#include<iostream>
using namespace std;
int main(){
    int i,j,row,col;
    cout<<"Enter rows: ";
    cin>>row;
    cout<<"Enter column: ";
    cin>>col;
    int A[50][50],transpose[50][50];
    cout<<"Enter elements of matrix:\n";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>A[i][j];
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            transpose[j][i]=A[i][j];      
        }
    }
 cout<<"\nTranspose of matrix:\n";
 for(i=0;i<col;i++){
    for(j=0;j<row;j++){
        cout<<transpose[i][j]<<" ";
    }
    cout<<endl;
 }
}