#include <iostream>
#include <string>
using namespace std;

int main()
{
    char again = 'y';

    while (again == 'y' || again == 'Y')
    {
        string enrollment, name, branch;
        int semester;

        cout << "\n--- Student Registration ---\n";

        cout << "Enrollment Number : ";
        cin >> enrollment;

        cin.ignore();

        cout << "Student Name : ";
        getline(cin, name);

        cout << "Branch : ";
        cin >> branch;

        cout << "Semester : ";
        cin >> semester;

        cout << "\nStudent Registered Successfully!\n";

        cout << "\nDo you want to enter another student? (y/n): ";
        cin >> again;
    }

    cout << "\nReturning to Main Menu...\n";

    return 0;
}