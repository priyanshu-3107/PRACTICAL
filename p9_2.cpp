#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Student {
    char enrollment[20];
    char name[50];
    char branch[20];
    int semester;
    float percentage;
    char grade[5];
};

// Part C - Address-based Function Access
void displayRecords(const Student *basePtr, int count) {
    cout << "\nStudent Records using Address-based Access\n" << endl;
    for (int i = 0; i < count; ++i) {
        const Student *current = basePtr + i;
        cout << "Address: " << (void*)current << endl;
        cout << current->enrollment << "  " 
             << current->name << "  " 
             << current->branch << "  " 
             << current->semester << "  " 
             << fixed << setprecision(2) << current->percentage << "  " 
             << current->grade << endl;
        cout << "--------------------------------------------" << endl;
    }
}

void displayAcademicSummary(const Student *basePtr, int count) {
    if (count <= 0) return;

    float total = 0.0f;
    float highest = basePtr->percentage;
    float lowest = basePtr->percentage;

    for (int i = 0; i < count; ++i) {
        float p = (basePtr + i)->percentage;
        total += p;
        if (p > highest) highest = p;
        if (p < lowest) lowest = p;
    }

    cout << "\nAcademic Summary\n" << endl;
    cout << fixed << setprecision(2);
    cout << "Class Average Percentage : " << (total / count) << " %" << endl;
    cout << "Highest Percentage       : " << highest << " %" << endl;
    cout << "Lowest Percentage        : " << lowest << " %" << endl;
    cout << "--------------------------------------------" << endl;
}

int main() {
    cout << "********************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM      " << endl;
    cout << "********************************************" << endl << endl;

    int n;
    cout << "Enter Number of Students: ";
    cin >> n;

    // Part A - Dynamic Memory Allocation
    Student *students = new Student[n];
    cout << "Dynamic Memory Allocated Successfully\n" << endl;

    cout << "Enter Student Details" << endl;
    for (int i = 0; i < n; ++i) {
        Student *curr = students + i; // Offset-based pointer
        cout << "\nStudent " << (i + 1) << endl << endl;
        cout << "Enrollment Number: ";
        cin >> curr->enrollment;
        cout << "Student Name     : ";
        cin.ignore();
        cin.getline(curr->name, 50);
        cout << "Branch           : ";
        cin >> curr->branch;
        cout << "Semester         : ";
        cin >> curr->semester;
        cout << "Percentage       : ";
        cin >> curr->percentage;
        cout << "Grade            : ";
        cin >> curr->grade;
    }

    // Part B & C - Address-based Processing & Traversal
    displayRecords(students, n);
    displayAcademicSummary(students, n);

    // Part D - Dynamic Memory Deallocation
    delete[] students;
    students = nullptr; // Reset address variable
    cout << "Dynamic Memory Released Successfully" << endl;
    cout << "Address Variable Reset Successfully" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Program Executed Successfully" << endl;

    return 0;
}