#include<iostream>
using namespace std;
int main(){
    int a,b,gcd=1; // initialize gcd to 1
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    for(int i=1; i<=a && i<=b; i++) // loop to find gcd
    {
        if(a%i==0 && b%i==0){ // check if i is a common divisor
            gcd=i; // update gcd
        }
    }
    cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd<<endl;
}