#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter size of square matrix: ";
    cin>>n;
    int A[n][n];
    cout<<"Enter elements of matrix:\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    bool isSymmetric = true;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(A[i][j] != A[j][i]){
                isSymmetric = false;
                break;
            }
 }
}
if(isSymmetric)
cout<<"Matrix is symmetric";
else
cout<<"Matrix is not symmetric";
}