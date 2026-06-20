#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    int freq[300]={0};

    for(char ch: str){
        freq[ch]++;
    }
    int maxFreq=0;
    char maxChar;

    for(char ch: str){
        if(freq[ch]>maxFreq){
            maxFreq=freq[ch];
            maxChar=ch;
        }
    }
    cout<<"Maximum occurring character: "<<maxChar<<endl;
    cout<<"Frequency: "<<maxFreq<<endl;
}