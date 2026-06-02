#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n; //n is the binary number
    cout<<"Enter a binary number: ";
    cin>>n;
    int decimal=0,rem,i=0;
    //converting binary to decimal
    while(n!=0){
        rem=n%10;//getting the last digit
        decimal+=rem*pow(2,i);
        n/=10;//removing the last digit
        i++;//updating the power of 2
    }
    //printing the decimal number
    cout<<"binary to decimal : "<<decimal;
}