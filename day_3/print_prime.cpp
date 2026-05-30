#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    bool isPrime = true; // true means prime
    cout<<"Enter range: ";
    cin>>n>>m;
    cout<<"Prime numbers between "<<n<<" and "<<m<<" are: "<<"\n";
    for(i=n; i<=m; i++) // loop to check prime numbers in the range
    {
        if(i==0 || i==1){
            isPrime=false; // false means not prime
        }
        else{
            for( j=2; j<i; j++) // loop to check if i is prime or not
            {
                if(i%j==0){
                    isPrime=false;
                    break; // to get out of the loop
                }
            }
        }
        if(isPrime){
            cout<<i<<" "<<"\n";
        }
        isPrime=true; // reset isPrime for the next number
    }
}

    