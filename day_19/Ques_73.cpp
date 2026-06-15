#include<iostream>
using namespace std;
int main(){
    int i,j,row,col;
    cout<<"Enter rows: ";
    cin>>row;
    cout<<"Enter column: ";
    cin>>col;
    int A[50][50],B[50][50],sum[50][50];
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
            sum[i][j]=A[i][j]+B[i][j];        
        }
    }
 cout<<"\nSum of matrices:\n";
 for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        cout<<sum[i][j]<<" ";
    }
    cout<<endl;
 }
}