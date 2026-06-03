#include<iostream>
using namespace std;
int sum(int n){
    if (n==0) //base case
        return 0;
    else
        return (n % 10) + sum(n / 10); //recursive call
}
int main(){
    int n;
    cout<<"Enter a number: "; //input number
    cin>>n;
    //output sum of digits
    cout<<"Sum of digits of "<<n<<" is "<<  sum(n)<<endl;
}