#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Student {
    string  studentId;
    string studentName;
    string studentCourse;
    int studentAge;
};

int main() {
    const int MAX_STUDENTS = 5;
    Student students[MAX_STUDENTS];
    int numStudents = 0;

    for (int i = 0; i < MAX_STUDENTS; ++i) {
        cout << "Enter details for student " << i + 1 << endl;

        cout << "Enter student ID: ";
        cin >> students[numStudents].studentId;

        cout << "Enter student Name: ";
        cin.ignore();

        getline(cin, students[numStudents].studentName);

        cout << "Enter student course: ";
        getline(cin, students[numStudents].studentCourse);

        cout << "Enter student age: ";
        cin >> students[numStudents].studentAge;

        numStudents++;


        if (numStudents >= MAX_STUDENTS) {
            cout << "Maximum number of students reached." << endl;
            break;
        }

        char choice;
        cout << "Do you want to enter details for another student? (y/n): ";
        cin >> choice;
        if (tolower(choice) != 'y') {
            break;
        }
    }


    cout << "| " << setw(18) << "Student ID" << " | " << setw(20) << "Student Name"
         << " | " << setw(20) << "Student Course" << " | " << setw(11) << "Student Age" << " |" << endl;

    for (int i = 0; i < numStudents; ++i) {
        cout << "| " << setw(18) << students[i].studentId << " | " << setw(20) << students[i].studentName
             << " | " << setw(20) << students[i].studentCourse << " | " << setw(11) << students[i].studentAge << " |" << endl;
    }

    return 0;
}
