#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string enrollment;
    string name;
    string branch;
    int semester;
    float percentage;
    string grade;
};

int main() {
    cout << "********************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM      " << endl;
    cout << "********************************************" << endl << endl;

    const string recordsFile = "StudentRecords.txt";
    const string backupFile = "BackupStudentRecords.txt";

    // Part A - Create and Write Student Records
    ofstream outFile(recordsFile);
    if (!outFile.is_open()) {
        cerr << "Error: Could not create " << recordsFile << endl;
        return 1;
    }
    cout << recordsFile << " Created Successfully\n" << endl;

    int n;
    cout << "Enter Number of Students: ";
    cin >> n;

    vector<Student> list(n);
    for (int i = 0; i < n; ++i) {
        cout << "\nStudent " << (i + 1) << endl;
        cout << "Enrollment Number: ";
        cin >> list[i].enrollment;
        cout << "Student Name: ";
        cin.ignore();
        getline(cin, list[i].name);
        cout << "Branch: ";
        cin >> list[i].branch;
        cout << "Semester: ";
        cin >> list[i].semester;
        cout << "Percentage: ";
        cin >> list[i].percentage;
        cout << "Grade: ";
        cin >> list[i].grade;

        // Writing structured records to file
        outFile << list[i].enrollment << "\n"
                << list[i].name << "\n"
                << list[i].branch << "\n"
                << list[i].semester << "\n"
                << fixed << setprecision(2) << list[i].percentage << "\n"
                << list[i].grade << "\n";
    }
    outFile.close();
    cout << "\nStudent Records Stored Successfully\n" << endl;

    // Part B - Read and Display Student Records
    ifstream inFile(recordsFile);
    if (!inFile.is_open()) {
        cerr << "Error: Could not open " << recordsFile << " for reading." << endl;
        return 1;
    }

    cout << "Reading " << recordsFile << endl;
    Student s;
    while (inFile >> s.enrollment) {
        inFile.ignore();
        getline(inFile, s.name);
        inFile >> s.branch >> s.semester >> s.percentage >> s.grade;

        cout << "Enrollment: " << s.enrollment << endl;
        cout << "Name: " << s.name << endl;
        cout << "Branch: " << s.branch << endl;
        cout << "Semester: " << s.semester << endl;
        cout << fixed << setprecision(2);
        cout << "Percentage: " << s.percentage << endl;
        cout << "Grade: " << s.grade << "\n" << endl;
    }

    if (inFile.eof()) {
        cout << "End of File Reached Successfully\n" << endl;
    }
    inFile.close();

    // Part C - Backup Student Records
    cout << "Creating " << backupFile << endl;
    ifstream srcFile(recordsFile);
    ofstream destFile(backupFile);

    if (!srcFile.is_open() || !destFile.is_open()) {
        cerr << "Error: Backup process failed." << endl;
        return 1;
    }

    destFile << srcFile.rdbuf();
    srcFile.close();
    destFile.close();

    cout << "Backup Completed Successfully\n" << endl;
    cout << "Program Executed Successfully" << endl;

    return 0;
}