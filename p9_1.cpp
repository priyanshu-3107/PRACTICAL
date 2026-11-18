#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "********************************************" << endl;
    cout << "          MEMORY ADDRESS EXPLORER           " << endl;
    cout << "********************************************" << endl << endl;

    // Part A - Address and Value
    int intVal = 25;
    char charVal = 'A';
    float floatVal = 85.60f;

    cout << "----------- Variable Information -----------" << endl;
    cout << "Integer Value   : " << intVal << endl;
    cout << "Memory Address  : " << (void*)&intVal << endl << endl;

    cout << "--------------------------------------------" << endl;
    cout << "Character Value : " << charVal << endl;
    cout << "Memory Address  : " << (void*)&charVal << endl << endl;

    cout << "--------------------------------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Floating Value  : " << floatVal << endl;
    cout << "Memory Address  : " << (void*)&floatVal << endl << endl;

    // Part B - Indirect Referencing
    cout << "--------------------------------------------" << endl;
    cout << "Indirect Referencing" << endl;
    int *ptr = &intVal;
    cout << "Stored Value    : " << *ptr << endl;
    
    *ptr = 30; // Modify via pointer
    cout << "Modified Value  : " << *ptr << endl << endl;

    // Part C - Sequential Data Collections
    cout << "--------------------------------------------" << endl;
    cout << "Sequential Data Collection" << endl;
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "\nArray using Index" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    cout << "Array using Address-based Access" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl << endl;

    cout << "--------------------------------------------" << endl;
    cout << "Observation" << endl;
    cout << "Both approaches access the same memory locations." << endl;

    return 0;
}
