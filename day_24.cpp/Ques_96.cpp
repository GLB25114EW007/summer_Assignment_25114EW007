#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,result=" ";
    int visited[300]={0};

    cout<<"Enter a string: ";
    cin>>str;

    for(int i=0;i<=str.length();i++){
        if(visited[str[i]]==0){
            result +=str[i];
            visited[str[i]] =1;
        }
}
cout<<"String after removing duplicates: "<<result;
}