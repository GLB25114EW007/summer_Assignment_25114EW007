#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter a number: ";//taking input from user
    cin>>n;
    //checking for factors of n and adding them to sum
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    //checking if sum of factors is equal to n
    if(sum==n)
    {
        cout<<n<<" is a perfect number.";
    }
    else
    {
        cout<<n<<" is not a perfect number.";
    }
}