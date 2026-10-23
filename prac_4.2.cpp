#include <iostream>
using namespace std;

int main()
{
    float percentage;
    char grade;
    string remark;

    cout << "Enter Percentage : ";
    cin >> percentage;

    if (percentage >= 90)
    {
        grade = 'O';
        remark = "Outstanding";
    }
    else if (percentage >= 80)
    {
        grade = 'A';
        remark = "Excellent";
    }
    else if (percentage >= 70)
    {
        grade = 'A';
        remark = "Very Good";
    }
    else if (percentage >= 60)
    {
        grade = 'B';
        remark = "Good";
    }
    else if (percentage >= 50)
    {
        grade = 'B';
        remark = "Satisfactory";
    }
    else if (percentage >= 40)
    {
        grade = 'C';
        remark = "Needs Improvement";
    }
    else
    {
        grade = 'F';
        remark = "Failed";
    }

    cout << "\nPercentage : " << percentage << "%";
    cout << "\nGrade      : " << grade;
    cout << "\nRemark     : " << remark << endl;

    return 0;
}