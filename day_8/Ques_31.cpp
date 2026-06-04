#include<iostream>
using namespace std;
int main(){
    int rows=5 ;
    for(int i=1;i<=rows;i++){
        char ch = 'A';
        for(int j=1;j<=i;j++){
            //print "character"
            cout<<ch;
        ch++;
        }
        //move to the next line 
        cout<<endl;
    }
}