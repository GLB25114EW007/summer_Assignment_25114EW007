#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c;
    cout<<"Enter the position of the Fibonacci number: ";//input position
    cin>>n;
    //using loop to calculate the Fibonacci number at the given position
    for(int i=1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    //print the Fibonacci number at the given position
    cout<<"The "<<n<<"th Fibonacci number is: "<<a;
}
