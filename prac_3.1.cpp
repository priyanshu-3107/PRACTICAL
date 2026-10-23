#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string enrollment, name, branch;
    int semester;
    float mathematics, physics, cpf;
    float total, average, percentage;

    cout << "STUDENT RECORD MANAGEMENT SYSTEM\n\n";

    cout << "Enter Enrollment Number : ";
    cin >> enrollment;

    cout << "Enter Student Name : ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Branch : ";
    cin >> branch;

    cout << "Enter Semester : ";
    cin >> semester;

    cout << "\nEnter Mathematics Marks : ";
    cin >> mathematics;

    cout << "Enter Physics Marks : ";
    cin >> physics;

    cout << "Enter CPF Marks : ";
    cin >> cpf;

    total = mathematics + physics + cpf;
    average = total / 3;
    percentage = (total / 300) * 100;

    cout << fixed << setprecision(2);

    cout << "\n--------------------------------------------\n";
    cout << "ACADEMIC SUMMARY\n";
    cout << "--------------------------------------------\n";

    cout << "Enrollment : " << enrollment << endl;
    cout << "Name       : " << name << endl;
    cout << "Branch     : " << branch << endl;
    cout << "Semester   : " << semester << endl;

    cout << "\nMathematics : " << mathematics << endl;
    cout << "Physics     : " << physics << endl;
    cout << "CPF         : " << cpf << endl;

    cout << "\nTotal Marks : " << total << endl;
    cout << "Average     : " << average << endl;
    cout << "Percentage  : " << percentage << "%" << endl;

    return 0;
}