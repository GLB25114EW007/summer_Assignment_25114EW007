#include<iostream>
using namespace std;
int main(){
    int n, max_count=0,max_element;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: \n";
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max_count){
            max_count=count;
            max_element=arr[i];
        }
    }
    cout<<"Element with maximum frequency: "<<max_element<<endl;
    cout<<"Frequency: "<<max_count;
}