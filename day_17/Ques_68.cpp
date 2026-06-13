#include<iostream>
using namespace std;
int main(){
    int arr1[50],arr2[50];
    int n1,n2,i,j;
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
    cout<<"Common elements are:\n";
    for(i=0;i<n1;i++){
        found=false;
    for(j=0;j<n2;j++){
        if(arr1[i]==arr2[j]){
            found=true;
            break;
        }
    }
    if(found){
        bool already_printed = false;
        for(int k=0;k<i;k++){
            if(arr1[k]==arr1[i]){
                already_printed=true;
                break;
            }
        }
        if(!already_printed){
            cout<<arr1[i]<<" ";
        }
    }
    }

}