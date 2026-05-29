#include<iostream>
using namespace std;
int main(){
    int n, product=1,r;
    cout<<"Enter a number: ";
    cin>>n;
    if(n==0){
        product=0;
    }
    else{
        while(n!=0){
        r=n % 10;
        product=product*r;
            n=n/10;
        }
    }
    cout<<"Product of digits: "<<product<<endl;
}