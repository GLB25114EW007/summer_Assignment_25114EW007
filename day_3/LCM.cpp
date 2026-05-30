#include<iostream>
using namespace std;
//function to calculate GCD
int gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b = a % b; // update b to the remainder
        a = temp; // update a to the previous value of b
    }
    return a; // return the GCD
}
int main(){
    int a,b, LCM;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
     LCM = (a * b) / gcd(a, b); // calculate LCM using GCD
    cout<<"LCM of "<<a<<" and "<<b<<" is: "<<LCM<<endl;
}