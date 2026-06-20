#include<iostream>
using namespace std;
int main(){
    string str1,str2;
    cout<<"Enter first string: ";
    cin>>str1;
    cout<<"Enter second string: ";
    cin>>str2;

    if(str1.length()!=str2.length()){
        cout<<"Not an anagram";
        return 0;
    }
    int freq[300]={0};

    for(char ch: str1){
        freq[ch]++;
    }
     
    for(char ch: str2){
        freq[ch]--;
    }

    for(int i=0;i<300;i++){
    if(freq[i]!=0){
        cout<<"Not an anagram";
        return 0;
    }
}
cout<<"Anagram strings";
}