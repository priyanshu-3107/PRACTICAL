#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

// Compile-time Global Variable
int globalVal = 100;

int main() {
    cout << "********************************************" << endl;
    cout << " PROGRAM EXECUTION & ERROR HANDLING ANALYZER" << endl;
    cout << "********************************************" << endl << endl;

    // Part A - Compile-time and Run-time Memory
    int localVal = 200;                    // Stack
    int *dynamicVal = new int(300);        // Heap (Run-time)

    cout << "Compile-time and Run-time Memory" << endl;
    cout << "Global Variable Value : " << globalVal << endl;
    cout << "Local Variable Value  : " << localVal << endl;
    cout << "Dynamic Memory Value  : " << *dynamicVal << endl;
    delete dynamicVal;
    dynamicVal = nullptr;

    // Part B - Low-level Error Demonstration
    cout << "\nLow-level Error Demonstration" << endl;
    short overflowTest = SHRT_MAX;
    overflowTest += 1; // Exceeding capacity
    cout << "Arithmetic Overflow Observed" << endl;

    cout << "\nPointer Aliasing" << endl;
    int sharedTarget = 50;
    int *ptrA = &sharedTarget;
    int *ptrB = &sharedTarget;
    cout << "Original Value: " << *ptrA << endl;
    *ptrB = 75; // Modify via second pointer alias
    cout << "Updated Value : " << *ptrA << endl;
    cout << "Both Address Variables Refer to the Same Memory Location" << endl;

    cout << "\nMemory Leak Demonstration" << endl;
    int *leakDemo = new int(400);
    cout << "Dynamic Memory Allocated" << endl;
    delete leakDemo; // Properly released
    leakDemo = nullptr;
    cout << "Memory Released Successfully" << endl;

    // Part C - Error Handling
    cout << "\nArithmetic Operation" << endl;
    int dividend = 25, divisor = 0;
    cout << "Enter Dividend: " << dividend << endl;
    cout << "Enter Divisor: " << divisor << endl;
    if (divisor == 0) {
        cout << "Error: Division by Zero is not Allowed." << endl;
    } else {
        cout << "Result: " << (dividend / divisor) << endl;
    }

    cout << "\nFile Operation" << endl;
    ifstream nonExistentFile("non_existent_system_file_xyz.txt");
    if (!nonExistentFile.is_open()) {
        cout << "Unable to Open File." << endl;
    } else {
        nonExistentFile.close();
    }

    cout << "\nProgram Executed Successfully" << endl;
    return 0;
}