#include<iostream>
using namespace std;
int main(){
    int n;
    //Input size of array
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    //Input array elements
    cout<<"Enter"<<n<<"elements: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Array elements are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}