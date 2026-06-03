#include<iostream>
using namespace std;
int reverse(int n, int rev=0){
    if (n==0) //base case
        return rev;
    else
        rev= rev*10 + n%10; //recursive call
        n=n/10;
        return reverse(n, rev);
}
int main(){
    int n;
    cout<<"Enter a number: "; //input number
    cin>>n;
    //output reverse of number
    cout<<"Reverse of "<<n<<" is "<<reverse(n)<<endl;
}