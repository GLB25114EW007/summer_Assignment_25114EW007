#include<iostream>
using namespace std;
int main(){
    int i,j,r,c,sum;
    cout<<"Enter number of rows and columns: ";
    cin>>r>>c;
    int A[r][c];
    cout<<"Enter elements :\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>A[i][j];
        }
    }
    for(j=0;j<c;j++){
        sum=0;
        for(i=0;i<r;i++){
            sum +=A[i][j];
 }
cout<<"Sum of column "<<j+1<<" = "<<sum<<endl;
}
}