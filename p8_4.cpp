#include <iostream>
using namespace std;

// Part A: Recursive Traversal Function Prototypes
void print1ToN(int n);
void printNTo1(int n);

// Part B: Recursive Number Processing Function Prototypes
int reverseNumber(int n, int rev = 0);
int sumOfDigits(int n);

// Part C: Recursive Number Conversion Function Prototype
void decimalToBinary(int n);

int main() {
    int n, num, decimalNum;

    cout << "********************************************\n";
    cout << "         RECURSIVE UTILITY ANALYZER         \n";
    cout << "********************************************\n";

    // ---------------- PART A: Recursive Traversal ----------------
    cout << "\n----------- Part A: Recursive Traversal -----------\n";
    cout << "Enter a positive integer (N) : ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer greater than 0.\n";
    } else {
        cout << "Numbers from 1 to " << n << "          : ";
        print1ToN(n);
        cout << "\n";

        cout << "Numbers from " << n << " to 1          : ";
        printNTo1(n);
        cout << "\n";
    }

    // ------------ PART B: Recursive Number Processing ------------
    cout << "\n------- Part B: Recursive Number Processing -------\n";
    cout << "Enter a positive integer     : ";
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive integer greater than 0.\n";
    } else {
        cout << "Reversed Number              : " << reverseNumber(num) << "\n";
        cout << "Sum of Digits                : " << sumOfDigits(num) << "\n";
    }

    // ------------ PART C: Recursive Number Conversion ------------
    cout << "\n------- Part C: Recursive Number Conversion -------\n";
    cout << "Enter a decimal number       : ";
    cin >> decimalNum;

    if (decimalNum < 0) {
        cout << "Please enter a non-negative decimal integer.\n";
    } else {
        cout << "Binary Representation        : ";
        decimalToBinary(decimalNum);
        cout << "\n";
    }

    cout << "\n--------------------------------------------\n";
    cout << "Program Executed Successfully.\n";
    cout << "--------------------------------------------\n";

    return 0;
}

// Displays numbers from 1 to N (Head Recursion)
void print1ToN(int n) {
    if (n == 0) {
        return; // Base condition
    }
    print1ToN(n - 1);
    cout << n << " ";
}

// Displays numbers from N to 1 (Tail Recursion)
void printNTo1(int n) {
    if (n == 0) {
        return; // Base condition
    }
    cout << n << " ";
    printNTo1(n - 1);
}

// Reverses a positive integer using a default accumulator parameter
int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev; // Base condition
    }
    return reverseNumber(n / 10, (rev * 10) + (n % 10));
}

// Calculates the sum of digits of a positive integer
int sumOfDigits(int n) {
    if (n == 0) {
        return 0; // Base condition
    }
    return (n % 10) + sumOfDigits(n / 10);
}

// Converts and prints a decimal number in binary
void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);
    }
    cout << (n % 2);
}