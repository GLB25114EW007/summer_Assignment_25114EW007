#include<iostream>
#include<string>
using namespace std;
 int main(){
    string name;
    int roll;
    float sub1,sub2,sub3,sub4,sub5;
    float total,percentage;
    char grade;

    cout<<"===== Mark Sheet Generation System ====="<<endl;

    //Input details
    cout<<"Enter Student Name: ";
    getline(cin,name);
    cout<<"Enter Roll Number: ";
    cin>>roll;

    cout<<"Enter marks for 5 subjects:\n";
    cin>>sub1 >>sub2 >>sub3 >>sub4 >>sub5;

    //Calculate total and percentage
    total=sub1 + sub2 + sub3 + sub4 + sub5;
    percentage=total/5;

    //Grade calculation
    if(percentage>=90)
    grade='A';
    else if(percentage>=75)
    grade='B';
    else if(percentage>=60)
    grade='C';
    else if(percentage>=23)
    grade='D';
    else
    grade='F';

    //Display mark sheet
    cout<<"\n===== Mark Sheet ====="<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No."<<roll<<endl;
    cout<<"Marks:"<<sub1<<","<<sub2<<","<<sub3<<","<<sub4<<","<<sub5<<endl;
    cout<<"Total:"<<total<<endl;
    cout<<"Percentage:"<<percentage<<"%"<<endl;
    cout<<"Grade:"<<grade<<endl;
    return 0;
 }