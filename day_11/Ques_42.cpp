#include<iostream>
using namespace std;
//function to find maximum
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}
int main(){
    int n1,n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    cout<<max(n1,n2);
}