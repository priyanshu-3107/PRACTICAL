#include <iostream>

using namespace std;

void demonstrateStackAndHeap() {
    // Stack Memory
    int localStackVar = 100;
    cout << "Stack Memory" << endl;
    cout << "Local Variable Value : " << localStackVar << endl;
    cout << "Memory Address       : " << (void*)&localStackVar << endl;
    cout << "--------------------------------------------" << endl;

    // Dynamic Heap Memory
    int *heapVar = new int(250);
    cout << "Dynamically Allocated Memory" << endl;
    cout << "Allocated Value      : " << *heapVar << endl;
    cout << "Memory Address       : " << (void*)heapVar << endl;
    cout << "--------------------------------------------" << endl;

    delete heapVar;
    heapVar = nullptr;
}

void demonstrateMultiLevelReferencing() {
    int originalVal = 50;
    int *ptr1 = &originalVal;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    cout << "--------- Multi-level Referencing ---------" << endl;
    cout << "Original Value                      : " << originalVal << endl;
    cout << "Single-level Address                : " << (void*)ptr1 << endl;
    cout << "Double-level Address                : " << (void*)ptr2 << endl;
    cout << "Triple-level Address                : " << (void*)ptr3 << endl;
    cout << "Value Accessed through Three Levels : " << ***ptr3 << endl;
    cout << "--------------------------------------------" << endl;
}

void demonstrateMemorySafety() {
    cout << "-------------- Memory Safety --------------" << endl;

    // 1. Null Reference
    int *safeNullPtr = nullptr;
    cout << "Null Reference" << endl;
    if (safeNullPtr == nullptr) {
        cout << "Safe (Reference is NULL)" << endl;
    }
    cout << "--------------------------------------------" << endl;

    // 2. Invalid Reference
    int *danglingPtr = new int(10);
    delete danglingPtr;
    danglingPtr = nullptr; // Reset to avoid dangling reference
    cout << "Invalid Reference" << endl;
    cout << "Memory Released Successfully" << endl;
    cout << "Reference Invalid" << endl;
    cout << "--------------------------------------------" << endl;

    // 3. Uninitialized Address Variable
    cout << "Uninitialized Address Variable" << endl;
    cout << "Unsafe to Access" << endl;
}

int main() {
    cout << "********************************************" << endl;
    cout << "        MEMORY ORGANIZATION ANALYZER        " << endl;
    cout << "********************************************" << endl << endl;

    demonstrateStackAndHeap();
    demonstrateMultiLevelReferencing();
    demonstrateMemorySafety();

    return 0;
}