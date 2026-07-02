#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;

    cout<<"Enter number of students:";
    cin>>n;
    cin.ignore(); // To ignore the newline character after reading n

    string names[100];
    string courses[100];
    int rollNo[100];
    float marks[100];

    for(int i=0;i<n;i++){
        cout<<"Enter details of Student"<<i+1<<endl;
    cout<<"Roll No:";
     cin>>rollNo[i];
    cin.ignore(); // To ignore the newline character after reading rollNo
        cout<<"Name:";
        getline(cin,names[i]);
        cout<<"Course:";
        getline(cin,courses[i]);
        cout<<"Marks:";
        cin>>marks[i];
        cin.ignore(); // To ignore the newline character after reading marks
        }
        cout<<"STUDENT DETAILS"<<endl;
        for(int i=0;i<n;i++){
            cout<<"Roll No:"<<rollNo[i]<<endl;
            cout<<"Name:"<<names[i]<<endl;
            cout<<"Course:"<<courses[i]<<endl;
            cout<<"Marks:"<<marks[i]<<endl;
        }
        return 0;
    }