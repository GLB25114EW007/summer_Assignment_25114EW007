#include<iostream>
using namespace std;
int main(){
    int n,result=1,x; //n is the power and x is the base
    cout<<"Enter the value of x and n : ";
    cin>>x>>n;
    //calculating x^n
    for(int i=1;i<=n;i++){
        result*=x;
    }
    //printing the result
    cout<<"result: "<<result;
}