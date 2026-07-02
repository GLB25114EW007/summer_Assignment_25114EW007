#include<iostream>
#include<string>
using namespace std;
const int MAX = 100;
struct Student {
    int id;
    string name;
    float marks;
};
Student students[MAX];
int countStudents = 0;

void addStudent(){
    if(countStudents >= MAX){
        cout << "Cannot add more students. Maximum limit reached." << endl;
        return;
    }
    Student s;
    cout << "Enter student ID: ";
    cin >> s.id;
    cout << "Enter student name: ";
    cin.ignore(); // To ignore the newline character left in the buffer
    getline(cin, s.name);
    cout << "Enter student marks: ";
    cin >> s.marks;
    
    students[countStudents++] = s;
    cout << "Student added successfully!" << endl;
}
void displayStudents(){
    if(countStudents == 0){
        cout << "No students to display." << endl;
        return;
    }
    cout<<"Student List:" << endl;
    for(int i = 0; i < countStudents; i++){
        cout << "ID: " << students[i].id << ", Name: " << students[i].name << ", Marks: " << students[i].marks << endl;
    }
}

void searchStudent(){
    string name;
    cin.ignore();
    cout<<"Enter name to search: ";
    getline(cin,name);

    for(int i=0;i<countStudents;i++){
        if(students[i].name == name){
            cout << "Student found: ID: " << students[i].id << ", Name: " << students[i].name << ", Marks: " << students[i].marks << endl;
            return;
        }
    }
    cout << "Student not found." << endl;
}

void updateStudent(){
    int id;
    cout<<"Enter student ID to update: ";
    cin >> id;

    for(int i=0;i<countStudents;i++){
        if(students[i].id == id){
            cin.ignore();
            cout << "Enter new name: ";
            getline(cin, students[i].name);
            cout << "Enter new marks: ";
            cin >> students[i].marks;
            cout << "Student updated successfully!" << endl;
            return;
        }
    }
    cout << "Student not found." << endl;
}

void deleteStudent(){
    int id;
    cout<<"Enter student ID to delete: ";
    cin >> id;

    for(int i=0;i<countStudents;i++){
        if(students[i].id == id){
            for(int j=i;j<countStudents-1;j++){
                students[j] = students[j+1];
            }
            countStudents--;
            cout << "Student deleted successfully!" << endl;
            return;
        }
    }
    cout << "Student not found." << endl;
}
int main(){
    int choice;
    do{
        cout << "\nStudent Management System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Update Student" << endl;
        cout << "5. Delete Student" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }while(choice != 6);

    return 0;
}