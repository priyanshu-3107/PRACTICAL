#include <iostream>
#include <string>
using namespace std;

int main()
{
    string enrollment, name, branch, mobile;
    int semester;

    cout << "*************************************************\n";
    cout << "* STUDENT RECORD MANAGEMENT SYSTEM              *\n";
    cout << "*************************************************\n";

    cout << "Enter Enrollment Number : ";
    cin >> enrollment;

    cin.ignore();

    cout << "Enter Student Name : ";
    getline(cin, name);

    cout << "Enter Branch : ";
    cin >> branch;

    cout << "Enter Semester : ";
    cin >> semester;

    cout << "Enter Mobile Number : ";
    cin >> mobile;

    cout << "\n------------------------------------------\n";
    cout << "Student Information\n";
    cout << "------------------------------------------\n";

    cout << "Enrollment Number : " << enrollment << endl;
    cout << "Student Name      : " << name << endl;
    cout << "Branch            : " << branch << endl;
    cout << "Semester          : " << semester << endl;
    cout << "Mobile Number     : " << mobile << endl;

    cout << "------------------------------------------\n";

    return 0;
}