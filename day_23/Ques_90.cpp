#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int freq[300]={0};

    for(char ch: str){
        freq[ch]++;
        if(freq[ch]==2){
            cout<<"First repeating character: "<<ch<<endl;
            return 0;
        }
    }
    cout<<"No repeating character found.";
}
