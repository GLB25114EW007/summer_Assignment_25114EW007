#include<iostream>
using namespace std;
int main(){
    int arr1[50],arr2[50],inter[100];
    int n1,n2,i,j,k=0,x;
    bool found;
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
    for(j=0;j<n2;j++){
        if(arr1[i]==arr2[j]){
        found=false;
    for(x=0;x<k;x++){
        if(inter[x]==arr1[i]){
            found=true;
            break;
        }
    }
    if(!found){
        inter[k++]=arr1[i];
    }
    }
    }
    }
    cout<<"Intersection of arrays:\n";
    for(i=0;i<k;i++){
        cout<<inter[i]<<" ";
    }
}