#include<iostream>
using namespace std;
int main(){
    int n,maxfactor;
    cout<<"Enter a number: ";//taking input from user
    cin>>n;
    maxfactor=2;
    //checking for factors of 2
    while(n%2==0){
        n/=2;
    }
    //checking for odd factors from 3 to sqrt(n)
    for(int i=3;i*i<=n;i+=2){
        while(n%i==0){
            maxfactor=i;
            n/=i;
        }
    }
    //if n is a prime number greater than 2
    if(n>2){
        maxfactor=n;
    }
    cout<<"The largest prime factor is: "<<maxfactor;
}