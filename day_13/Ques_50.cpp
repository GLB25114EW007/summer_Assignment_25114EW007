#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    float average;
    //Input size of array
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    // input elements of array
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>arr[i];
        sum+=arr[i];
    }
    average=(float)sum/n;
    cout<<"Sum= "<<sum<<endl;
    cout<<"Average= "<<average<<endl;
}