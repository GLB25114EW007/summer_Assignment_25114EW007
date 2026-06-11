#include<iostream>
using namespace std;
int main(){
    int n,d;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" element : ";
        cin>>arr[i];
    }
    cout<<"Enter number of rotations: ";
    cin>>d;
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[n-d+i];
    }
    for(int i=n-d-1;i>=0;i--){
        arr[i+d]= arr[i];
    }
    for(int i=0;i<d;i++){
        arr[i]= temp[i];
    }
    cout<<"Array after right rotation: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
} 