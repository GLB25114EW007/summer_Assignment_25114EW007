#include<iostream>
using namespace std;
int main(){
    int i,j,row,col;
    cout<<"Enter rows: ";
    cin>>row;
    cout<<"Enter column: ";
    cin>>col;
    int A[50][50],B[50][50],subt[50][50];
    cout<<"Enter elements of first matrix:\n";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>A[i][j];
        }
    }
    cout<<"\nEnter elements of second matrix:\n";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>B[i][j];
            
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            subt[i][j]=A[i][j]-B[i][j];        
        }
    }
 cout<<"\nSubtract of matrices:\n";
 for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        cout<<subt[i][j]<<" ";
    }
    cout<<endl;
 }
}