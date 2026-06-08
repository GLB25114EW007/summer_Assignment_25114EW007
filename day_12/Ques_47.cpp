#include<iostream>
using namespace std;
//Function to print fibonacci series
int fibonacci(int n){
    int a=0 ,b=1,temp;
    cout<<a<<" "<<b<< " ";
    for(int i=3;i<=n;i++){
        temp=a+b;
        cout<<temp<<" ";
        a=b;
        b=temp;
    }
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    fibonacci(n);
}
    
