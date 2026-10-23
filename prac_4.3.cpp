#include <iostream>
#include <string>
using namespace std;

int main()
{
    string enrollment, name, branch, mobile;
    int semester;
    float math = 0, physics = 0, cpf = 0;

    int choice;

    do
    {
        cout << "\n====================================\n";
        cout << " STUDENT RECORD MANAGEMENT SYSTEM\n";
        cout << "====================================\n";

        cout << "1. Register New Student\n";
        cout << "2. Display Student Record\n";
        cout << "3. Enter Student Marks\n";
        cout << "4. Display Academic Result\n";
        cout << "5. Exit\n";

        cout << "Enter Choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nEnter Enrollment Number : ";
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

                cout << "Student Registered Successfully.\n";
                break;

            case 2:
                cout << "\n--- Student Record ---\n";
                cout << "Enrollment : " << enrollment << endl;
                cout << "Name       : " << name << endl;
                cout << "Branch     : " << branch << endl;
                cout << "Semester   : " << semester << endl;
                cout << "Mobile     : " << mobile << endl;
                break;

            case 3:
                cout << "\nMathematics : ";
                cin >> math;

                cout << "Physics : ";
                cin >> physics;

                cout << "CPF : ";
                cin >> cpf;

                cout << "Marks Entered Successfully.\n";
                break;

            case 4:
            {
                float total = math + physics + cpf;
                float percentage = total / 3;

                string grade, remark;

                if (percentage >= 90)
                {
                    grade = "O";
                    remark = "Outstanding";
                }
                else if (percentage >= 80)
                {
                    grade = "A+";
                    remark = "Excellent";
                }
                else if (percentage >= 70)
                {
                    grade = "A";
                    remark = "Very Good";
                }
                else if (percentage >= 60)
                {
                    grade = "B+";
                    remark = "Good";
                }
                else if (percentage >= 50)
                {
                    grade = "B";
                    remark = "Satisfactory";
                }
                else if (percentage >= 40)
                {
                    grade = "C";
                    remark = "Needs Improvement";
                }
                else
                {
                    grade = "F";
                    remark = "Failed";
                }

                cout << "\n--- Academic Result ---\n";
                cout << "Total      : " << total << endl;
                cout << "Percentage : " << percentage << "%" << endl;
                cout << "Result     : "
                     << (percentage >= 40 ? "PASS" : "FAIL") << endl;
                cout << "Grade      : " << grade << endl;
                cout << "Remark     : " << remark << endl;

                break;
            }

            case 5:
                cout << "Program Terminated.\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}