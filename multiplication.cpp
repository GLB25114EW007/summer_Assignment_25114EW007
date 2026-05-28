#include<iostream>
using namespace std;
int main(){
    int n,p;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=1; i<=10; i++){
    p= n*i;
        cout<<n<<" * "<<i<<" = "<<p<<endl;
    }
}