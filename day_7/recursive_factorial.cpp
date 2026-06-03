#include<iostream>
using namespace std;
int fact(int n){
    if (n==0 || n==1) //base case
        return 1;
        return n*fact(n-1); //recursive call
    }
int main(){
    int n;
    cout<<"Enter a number: "; //input number
    cin>>n;
    //output factorial
    cout<<"Factorial of "<<n<<" is "<<fact(n)<<endl;
}