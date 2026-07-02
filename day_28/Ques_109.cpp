#include<iostream>
#include<string>
using namespace std;

class Book{
    public:
    int id;
    string title;
    string author;
    bool issued;

    void input(){
        cout<<"Enter Book ID:";
        cin>>id;
        cin.ignore();
        cout<<"Enter Book Title:";
        getline(cin,title);
        cout<<"Enter Author Name:";
        getline(cin,author);
        issued=false;
    }
    void display(){
        cout<<"\nID:"<<id;
        cout<<"\nTitle:"<<title;
        cout<<"\nAuthor:"<<author;
        cout<<"\nStatus:"<<(issued?"Issued":"Available")<<endl;
    }
};
class Library{
    private:
    Book books[100];
    int count=0;
    
    public:
    void addBook(){
        if(count<100){
            books[count].input();
            count++;
            cout<<"Book added successfully!\n";
        }
        else{
            cout<<"Library is full!\n";
        }
    }
    void displayBooks(){
        if(count==0){
            cout<<"No books available!\n";
            return;
        }
        for(int i=0;i<count;i++){
            books[i].display();
            cout<<"----------------\n";
        }
    }
    void searchBook(){
        int id;
        cout<<"Enter Book ID to search:";
        cin>>id;

        for(int i=0;i<count;i++){
            if(books[i].id==id){
                cout<<"Book found:\n";
                books[i].display();
                return;
            }
        }
        cout<<"Book not found:\n";
    }
    void issueBook(){
        int id;
        cout<<"Enter Book ID to issue:";
        cin>>id;

        for(int i=0;i<count;i++){
            if(books[i].id==id){
                if(!books[i].issued){
                    books[i].issued=true;
                    cout<<"Book issued successfully!\n";
                }
                else{
                    cout<<"Book is already issued!\n";
                }
                return;
            }
        }
        cout<<"Book not found!\n";
    }
};

int main(){
    Library lib;
    int choice;
    do{
        cout<<"\nLibrary Management System\n";
        cout<<"1. Add Book\n";
        cout<<"2. Display Books\n";
        cout<<"3. Search Book\n";
        cout<<"4. Issue Book\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;

        switch(choice){
            case 1:
                lib.addBook();
                break;
            case 2:
                lib.displayBooks();
                break;
            case 3:
                lib.searchBook();
                break;
            case 4:
                lib.issueBook();
                break;
                case 5:
                cout<<"Exiting...\n";
                break;
            default:
                cout<<"Invalid choice! Please try again.\n";
        }
    }while(choice!=5);

    return 0;
}