#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct Student {
    string enrollment;
    string name;
    string branch;
    int semester;
    vector<int> marks;
    int totalMarks;
    float percentage;
    string grade;
    string result;
};

// Function prototypes
void displayHeader();
void acceptStudentDetails(Student &s);
void calculateAcademicResult(Student &s);
void displayStudentReport(const Student &s);

int main() {
    Student student;

    displayHeader();
    acceptStudentDetails(student);
    calculateAcademicResult(student);
    displayStudentReport(student);

    return 0;
}

void displayHeader() {
    cout << "**************************************************\n";
    cout << "        STUDENT RECORD MANAGEMENT SYSTEM          \n";
    cout << "**************************************************\n\n";
}

void acceptStudentDetails(Student &s) {
    cout << "------------ Student Registration ------------\n";
    cout << "Enter Enrollment Number : ";
    cin >> s.enrollment;

    cout << "Enter Student Name      : ";
    cin.ignore();
    getline(cin, s.name);

    cout << "Enter Branch            : ";
    cin >> s.branch;

    cout << "Enter Semester          : ";
    cin >> s.semester;

    s.marks.resize(5);
    cout << "\nEnter Marks\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Subject " << (i + 1) << " : ";
        cin >> s.marks[i];
    }
    cout << "\n";
}

void calculateAcademicResult(Student &s) {
    s.totalMarks = 0;
    bool hasFailed = false;

    for (int mark : s.marks) {
        s.totalMarks += mark;
        if (mark < 40) {
            hasFailed = true;
        }
    }

    s.percentage = static_cast<float>(s.totalMarks) / 5.0f;

    if (s.percentage >= 85.0f) {
        s.grade = "A+";
    } else if (s.percentage >= 75.0f) {
        s.grade = "A";
    } else if (s.percentage >= 65.0f) {
        s.grade = "B";
    } else if (s.percentage >= 50.0f) {
        s.grade = "C";
    } else {
        s.grade = "F";
    }

    if (hasFailed || s.percentage < 40.0f) {
        s.result = "FAIL";
    } else {
        s.result = "PASS";
    }
}

void displayStudentReport(const Student &s) {
    cout << "--------------------------------------------------\n";
    cout << "Academic Report\n";
    cout << "--------------------------------------------------\n";
    cout << "Enrollment Number : " << s.enrollment << "\n";
    cout << "Student Name      : " << s.name << "\n";
    cout << "Branch            : " << s.branch << "\n";
    cout << "Semester          : " << s.semester << "\n";
    cout << "Total Marks       : " << s.totalMarks << "\n";
    cout << fixed << setprecision(2);
    cout << "Percentage        : " << s.percentage << "%\n";
    cout << "Grade             : " << s.grade << "\n";
    cout << "Result            : " << s.result << "\n";
    cout << "--------------------------------------------------\n";
    cout << "Program Executed Successfully Using User-defined Functions.\n";
}
