#include<iostream>
using namespace std;
int main(){
    int n , i;
    // take input from user
    cout<<"enter the valuse of n : ";
    cin>>n;
    bool isPrime=true; //true means prime
    // 0 and 1 are not prime numbers
    if(n==0 || n==1){
        isPrime=false; // false means not prime
    }
        for( i=2; i<n; i++) // loop to check if n is prime or not
        {
            if(n%i==0){
                isPrime=false;
                break; // to get out of the loop
            }
        }
        if(isPrime){
            cout<<n<<" is a prime number";
        }
        else{
            cout<<n<<" is not a prime number";
        }
    }
