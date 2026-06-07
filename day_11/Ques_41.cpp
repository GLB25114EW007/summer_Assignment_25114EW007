#include<iostream>
using namespace std;
//function to find sum 
int sum(int a,int b){
    return a+b;
}
int main(){
    int n1, n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    int result=sum(n1,n2);
    cout<<"Sum= "<<result;
}