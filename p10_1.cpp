#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

// Part B - Hierarchical Composite Data Grouping
struct AcademicInfo {
    int semester;
    float percentage;
    string grade;
};

struct ContactInfo {
    string mobileNumber;
    string emailId;
};

// Part A - Composite Data Modeling
struct Student {
    string enrollmentNumber;
    string studentName;
    string branch;
    AcademicInfo academic;
    ContactInfo contact;
};

// Part D - Address-based Data Sharing Functions
void displayStudentDetails(const Student *s) {
    cout << s->enrollmentNumber << " " << s->studentName << " " << s->branch << "\n";
    cout << "Semester: " << s->academic.semester << "\n";
    cout << fixed << setprecision(2);
    cout << "Percentage: " << s->academic.percentage << "\n";
    cout << "Grade: " << s->academic.grade << "\n";
    cout << "Mobile: " << s->contact.mobileNumber << "\n";
    cout << "Email: " << s->contact.emailId << "\n\n";
}

int main() {
    cout << "********************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM      " << endl;
    cout << "********************************************" << endl << endl;

    int n;
    cout << "Enter Number of Students: ";
    cin >> n;

    // Part C - Sequential Collection of Composite Data Types
    vector<Student> students(n);

    for (int i = 0; i < n; ++i) {
        cout << "\nStudent " << (i + 1) << endl;
        cout << "Enrollment Number: ";
        cin >> students[i].enrollmentNumber;
        cout << "Student Name     : ";
        cin.ignore();
        getline(cin, students[i].studentName);
        cout << "Branch           : ";
        cin >> students[i].branch;
        cout << "Semester         : ";
        cin >> students[i].academic.semester;
        cout << "Percentage       : ";
        cin >> students[i].academic.percentage;
        cout << "Grade            : ";
        cin >> students[i].academic.grade;
        cout << "Mobile Number    : ";
        cin >> students[i].contact.mobileNumber;
        cout << "Email ID         : ";
        cin >> students[i].contact.emailId;
    }

    cout << "\nStudent Records\n" << endl;
    for (int i = 0; i < n; ++i) {
        // Pass by address
        displayStudentDetails(&students[i]);
    }

    cout << "Program Executed Successfully" << endl;
    return 0;
}