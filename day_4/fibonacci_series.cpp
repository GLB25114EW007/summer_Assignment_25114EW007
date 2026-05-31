#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c;
    cout<<"Enter the number of terms: ";//input number of terms
    cin>>n;
    cout<<"Fibonacci Series: ";
    //using loop to calculate the Fibonacci series
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}