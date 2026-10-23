#include <iostream>
using namespace std;

int main()
{
    int n;
    float marks, total = 0;

    cout << "Enter Number of Subjects : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter Marks for Subject " << i << " : ";
        cin >> marks;

        total += marks;
    }

    float average = total / n;
    float percentage = average;

    cout << "\nTotal Marks : " << total;
    cout << "\nAverage     : " << average;
    cout << "\nPercentage  : " << percentage << "%";

    if (percentage >= 40)
        cout << "\nResult      : PASS";
    else
        cout << "\nResult      : FAIL";

    return 0;
}