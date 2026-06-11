#include<iostream>
using namespace std;
int main(){
    int n,j=0;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" element : ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=j;i<n;i++){
        arr[i]= 0;
    }
    cout<<"Array after moving zeros to end: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
} 