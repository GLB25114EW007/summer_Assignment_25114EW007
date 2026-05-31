#include<iostream>
#include<cmath> //for using pow() function
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the range: ";//input range
    cin>>n1>>n2;
    cout<<"Armstrong numbers in the range "<<n1<<" to "<<n2<<" are: ";
    for(int i=n1;i<=n2;i++){
        int n=i,r,sum=0,c=0;
        n1=n;
        //count the number of digits in the number
        while(n1!=0){
            n1=n1/10;
            c++;
        }
        n1=n;
        //calculate armstrong value
        while(n1!=0){
            r=n1%10;
            sum=sum+round(pow(r,c));
            n1=n1/10;
        }
        //check if the number is an armstrong number
        if(sum==n){
            cout<<n<<" "; //print armstrong number
        }
    }
    cout<<endl;
}