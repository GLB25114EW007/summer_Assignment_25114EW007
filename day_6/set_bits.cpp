#include<iostream>
using namespace std;
int main(){
    int n; //n is the decimal number
    cout<<"Enter a decimal number: ";
    cin>>n;
    int count=0;
    //counting the set bits
    while(n!=0){
        if(n%2==1){ //checking if the last bit is set
            count++;
        }
        n/=2; //removing the last bit
    }
    //printing the number of set bits
    cout<<"Number of set bits: "<<count;
}