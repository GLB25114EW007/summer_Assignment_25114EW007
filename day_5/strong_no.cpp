#include<iostream>
using namespace std;
int main(){
    int n,fact,sum=0,r,i,n1;
    cout<<"Enter a number: ";//taking input from user
    cin>>n;
    //storing the original number in n1
    n1=n;
    //calculating the sum of factorial of digits
    while(n!=0){
        r=n%10;
        fact=1;
        for(i=1;i<=r;i++){
            fact*=i;
        }
        sum+=fact;
        n/=10;
    }
    //checking if the sum of factorial of digits is equal to the original number
    if(sum==n1){
        cout<<n1<<" is a strong number.";
    }
    else{
        cout<<n1<<" is not a strong number.";
    }
}