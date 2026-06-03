#include<iostream>
using namespace std;
int fib(int n){
    if (n==0) //base case
        return 0;
    else if (n==1) //base case
        return 1;
    else
        return fib(n-1)+fib(n-2); //recursive call
}
int main(){
    int n;
    cout<<"Enter a number: "; //input number
    cin>>n;
    //output fibonacci
    cout<<"Fibonacci of "<<n<<" is "<<fib(n)<<endl;
}