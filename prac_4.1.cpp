#include <iostream>
using namespace std;

int main()
{
    float percentage;

    cout << "Enter Percentage : ";
    cin >> percentage;

    if (percentage >= 40)
    {
        cout << "Result : PASS" << endl;
        cout << "Congratulations! You have passed." << endl;
    }
    else
    {
        cout << "Result : FAIL" << endl;
        cout << "You need improvement." << endl;
    }

    return 0;
}