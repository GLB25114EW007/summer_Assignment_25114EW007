#include<iostream>
using namespace std;
int main(){
    int n, rev=0,r,n1;
    cout<<"Enter a number: ";
    cin>>n;
    n1=n;
    while(n!=0){
    r=n % 10;
    rev=rev*10+r;
        n=n/10;
    }
    if(n1==rev){
        cout<<"The number is a palindrome."<<endl;
    }
    else{
        cout<<"The number is not a palindrome."<<endl;
    }
}