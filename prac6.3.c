#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n;

    string enrollment[100];
    string name[100];
    double percentage[100];
    string grade[100];

    cout << "********************************************" << endl;
    cout << "       STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "********************************************" << endl;

    // Number of students
    cout << "\nEnter Number of Students : ";
    cin >> n;

    // ---------------- INPUT ----------------

    cout << "\nEnter Student Details" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Enrollment Number : ";
        cin >> enrollment[i];

        cout << "Enter Student Name : ";
        cin >> name[i];

        cout << "Enter Percentage : ";
        cin >> percentage[i];

        cout << "Enter Grade : ";
        cin >> grade[i];
    }

    // ---------------- DISPLAY ----------------

    cout << "\n--------------------------------------------" << endl;
    cout << "Current Student Records" << endl;
    cout << "--------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << enrollment[i] << " "
             << name[i] << " "
             << fixed << setprecision(2)
             << percentage[i] << " "
             << grade[i] << endl;
    }

    // ---------------- INSERT ----------------

    int position;

    cout << "\n--------------------------------------------" << endl;
    cout << "Insert New Student" << endl;

    cout << "Enter Position : ";
    cin >> position;

    // Position is considered 1-based
    position--;

    // Shift records to the right
    for (int i = n; i > position; i--)
    {
        enrollment[i] = enrollment[i - 1];
        name[i] = name[i - 1];
        percentage[i] = percentage[i - 1];
        grade[i] = grade[i - 1];
    }

    cout << "Enter Enrollment Number : ";
    cin >> enrollment[position];

    cout << "Enter Student Name : ";
    cin >> name[position];

    cout << "Enter Percentage : ";
    cin >> percentage[position];

    cout << "Enter Grade : ";
    cin >> grade[position];

    n++;

    cout << "\nRecord Inserted Successfully." << endl;

    // Display after insertion
    cout << "\n--------------------------------------------" << endl;
    cout << "Updated Student Records" << endl;
    cout << "--------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << enrollment[i] << " "
             << name[i] << " "
             << fixed << setprecision(2)
             << percentage[i] << " "
             << grade[i] << endl;
    }

    // ---------------- UPDATE ----------------

    string searchEnrollment;

    cout << "\n--------------------------------------------" << endl;
    cout << "Update Student Record" << endl;

    cout << "Enter Enrollment Number : ";
    cin >> searchEnrollment;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (enrollment[i] == searchEnrollment)
        {
            cout << "Enter New Percentage : ";
            cin >> percentage[i];

            cout << "Enter New Grade : ";
            cin >> grade[i];

            cout << "\nRecord Updated Successfully." << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nStudent Record Not Found." << endl;
    }

    // ---------------- DELETE ----------------

    cout << "\n--------------------------------------------" << endl;
    cout << "Delete Student Record" << endl;

    cout << "Enter Position : ";
    cin >> position;

    position--;

    if (position >= 0 && position < n)
    {
        // Shift records to the left
        for (int i = position; i < n - 1; i++)
        {
            enrollment[i] = enrollment[i + 1];
            name[i] = name[i + 1];
            percentage[i] = percentage[i + 1];
            grade[i] = grade[i + 1];
        }

        n--;

        cout << "Record Deleted Successfully." << endl;
    }
    else
    {
        cout << "Invalid Position." << endl;
    }

    // ---------------- FINAL RECORDS ----------------

    cout << "\n--------------------------------------------" << endl;
    cout << "Final Student Records" << endl;
    cout << "--------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << enrollment[i] << " "
             << name[i] << " "
             << fixed << setprecision(2)
             << percentage[i] << " "
             << grade[i] << endl;
    }

    return 0;
}
