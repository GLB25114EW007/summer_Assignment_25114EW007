#include<iostream>
using namespace std;
 struct Student{
    int id;
    string name;
    int age;
    float marks;
 };
 int main(){
    Student s[100];
    int count=0;
    int choice;

    do{
        cout<<"\n===== Student Record Management System ====="<<endl;
        cout<<"1.Add Student"<<endl;
        cout<<"2.Display All Students"<<endl;
        cout<<"3.Search Student by ID"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"\nEnter Student ID: ";
            cin>>s[count].id;
            cout<<"Enter Name: ";
            cin>>s[count].name;
            cout<<"Enter Age: ";
            cin>>s[count].age;
            cout<<"Enter Marks: ";
            cin>>s[count].marks;
            count++;
            cout<<"Student added successfully!"<<endl;
            break;

            case 2:
            cout<<"\n--- Student Records ---"<<endl;
            for(int i=0;i<count;i++){
                cout<<"ID: "<<s[i].id
                <<",Name: "<<s[i].name
                <<",Age: "<<s[i].age
                <<",Marks: "<<s[i].marks<<endl;
            }
            break;

            case 3:{
                int searchId;
                cout<<"Enter Student ID to search: ";
                cin>>searchId;
                bool found=false;

                for(int i=0;i<count;i++){
                    if(s[i].id==searchId){
                        cout<<"Record Found: "
                        <<"Name: "<<s[i].name
                        <<",Age: "<<s[i].age
                        <<",Marks: "<<s[i].marks<<endl;
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"Student not found!"<<endl;
                }
                break;
            }

            case 4:
            cout<<"Exiting program..."<<endl;
            break;

            default:
            cout<<"Invalid choice!"<<endl;
        }
    }
    while(choice!=4);
 }
