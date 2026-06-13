#include<iostream>
using namespace std;
int main(){
    int arr1[50],arr2[50],merged[100];
    int n1,n2,i;
    cout<<"Enter number of elements in first array: ";
    cin>>n1;
    cout<<"Enter elements of first array:\n";
    for(i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter number of elements in second array: ";
    cin>>n2;
    cout<<"Enter elements in second array:\n";
    for(i=0;i<n2;i++){
        cin>>arr2[i];
    }
    for(i=0;i<n1;i++){
        merged[i]=arr1[i];
    }
    for(i=0;i<n2;i++){
        merged[n1+i]=arr2[i];
    }
    cout<<"Merged array:\n";
    for(i=0;i<n1+n2;i++){
        cout<<merged[i]<<" ";
    }
}