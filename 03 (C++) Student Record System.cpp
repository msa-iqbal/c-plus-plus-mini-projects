/*  Project Name: Student Record System
    Features:
    - Store multiple students' info
    - Display student details
*/

#include<iostream>
using namespace std;

struct Student {
    string name;
    int age;
    float marks;
};

int main() {
    Student s[2];
    for(int i=0; i<2; i++) {
        cout << "Enter name, age, and marks: ";
        cin >> s[i].name >> s[i].age >> s[i].marks;
    }

    cout << "\nStudent Details:\n";
    for(int i=0; i<2; i++) {
        cout << s[i].name << " " << s[i].age << " " << s[i].marks << endl;
    }
    return 0;
}

/*  Output:
    Enter name, age, and marks: Alice 20 85
    Enter name, age, and marks: Bob 22 90

    Student Details:
    Alice 20 85
    Bob 22 90
*/