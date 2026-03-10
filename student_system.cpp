#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks;
};

int main() {

    Student students[100];
    int count = 0;
    int choice;

    while(true) {

        cout << "\n1 Add Student\n";
        cout << "2 View Students\n";
        cout << "3 Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) {

            cout << "Enter student name: ";
            cin >> students[count].name;

            cout << "Enter marks: ";
            cin >> students[count].marks;

            count++;

            cout << "Student added successfully!\n";
        }

        else if(choice == 2) {

            if(count == 0) {
                cout << "No students found\n";
            }

            else {

                cout << "\nStudent List:\n";

                for(int i = 0; i < count; i++) {

                    cout << "Name: "
                         << students[i].name
                         << " | Marks: "
                         << students[i].marks
                         << endl;
                }
            }
        }

        else if(choice == 3) {

            cout << "Exiting program\n";
            break;
        }

        else {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}