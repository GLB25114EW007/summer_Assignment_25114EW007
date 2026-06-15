#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter order of square matrix: ";
    cin>>n;
    int A[50][50];
    int primary_sum=0,secondary_sum=0;
    cout<<"Enter elements of matrix:\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>A[i][j];
        }
    }

    for(i=0;i<n;i++){
        primary_sum +=A[i][i]; 
        secondary_sum +=A[i][n-i-1];
        }
 cout<<"\nPrimary diagonal sum= "<<primary_sum;
 cout<<"\nSecondary diagonal sum= "<<secondary_sum;
 }
