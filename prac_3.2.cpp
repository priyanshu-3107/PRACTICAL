#include <iostream>
using namespace std;

int main()
{
    int cpfMarks = 70;

    cout << "Initial CPF Marks : " << cpfMarks << endl;

    cout << "\n++cpfMarks = " << ++cpfMarks << endl;
    cout << "After operation = " << cpfMarks << endl;

    cout << "\n--cpfMarks = " << --cpfMarks << endl;
    cout << "After operation = " << cpfMarks << endl;

    cout << "\ncpfMarks++ = " << cpfMarks++ << endl;
    cout << "After operation = " << cpfMarks << endl;

    cout << "\ncpfMarks-- = " << cpfMarks-- << endl;
    cout << "After operation = " << cpfMarks << endl;

    /*
       Demonstration of safe expression evaluation.

       Avoid expressions such as:
       result = ++cpfMarks + cpfMarks++;

       because modifying the same variable multiple times
       within one expression can lead to undefined/unsequenced
       behavior depending on the language/version.
    */

    cout << "\nFinal CPF Marks : " << cpfMarks << endl;

    return 0;
}