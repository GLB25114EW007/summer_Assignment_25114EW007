#include<iostream>
using namespace std;
int main(){
    int arr1[50],arr2[50],uni[100];
    int n1,n2,i,j,k=0;
    bool found;
    cout<<"Enter number of elements in first array: ";
    cin>>n1;
    cout<<"Enter elements of first array:\n";
    for(i=0;i<n1;i++){
        cin>>arr1[i];
        uni[k++]=arr1[i];
    }
    cout<<"Enter number of elements in second array: ";
    cin>>n2;
    cout<<"Enter elements in second array:\n";
    for(i=0;i<n2;i++){
        cin>>arr2[i];
    }
    for(i=0;i<n2;i++){
        found=false;
    for(j=0;j<k;j++){
        if(arr2[i]==uni[j]){
            found=true;
            break;
        }
    }
    if(!found){
        uni[k++]=arr2[i];
    }
    }
    cout<<"Union of arrays:\n";
    for(i=0;i<k;i++){
        cout<<uni[i]<<" ";
    }
}