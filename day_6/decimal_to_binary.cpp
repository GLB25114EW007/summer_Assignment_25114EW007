#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,binary[100],i=0,j;//n is the decimal number
    cout<<"Enter a decimal number: ";
    cin>>n;
    //converting decimal to binary
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    //printing the binary number
    cout<<"Decimal to binary: ";
    for(j=i-1;j>=0;j--){
        cout<<binary[j];
    }
}