#include <iostream>
#include <iomanip>

using namespace std;

// Global counter to monitor recursive function calls
int recursionCallCount = 0;

// Part A: Factorial Implementations
long long factorialIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

long long factorialRecursive(int n) {
    recursionCallCount++;
    if (n <= 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

// Part B: Fibonacci Implementations
void fibonacciIterative(int n) {
    long long first = 0, second = 1, next;
    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    cout << endl;
}

long long fibonacciTermRecursive(int n) {
    recursionCallCount++;
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacciTermRecursive(n - 1) + fibonacciTermRecursive(n - 2);
}

int main() {
    int nFact = 5;
    int nFibo = 7;

    cout << "====================================================" << endl;
    cout << "   RECURSIVE MATHEMATICAL OPERATIONS ANALYZER       " << endl;
    cout << "====================================================" << endl << endl;

    // Part A: Factorial
    cout << "--- Part A: Factorial (N = " << nFact << ") ---" << endl;
    cout << "Iterative Result : " << factorialIterative(nFact) << endl;

    recursionCallCount = 0;
    long long recFact = factorialRecursive(nFact);
    cout << "Recursive Result : " << recFact << endl;
    cout << "Total Recursive Function Calls: " << recursionCallCount << endl << endl;

    // Part B: Fibonacci
    cout << "--- Part B: Fibonacci Series (Terms = " << nFibo << ") ---" << endl;
    cout << "Iterative Generation : ";
    fibonacciIterative(nFibo);

    recursionCallCount = 0;
    cout << "Recursive Generation : ";
    for (int i = 0; i < nFibo; ++i) {
        cout << fibonacciTermRecursive(i) << " ";
    }
    cout << endl;
    cout << "Total Recursive Calls (for " << nFibo << " terms): " << recursionCallCount << endl << endl;

    // Part C: Comparison
    cout << "--- Part C: Comparative Analysis ---" << endl;
    cout << left << setw(20) << "Feature"
         << setw(25) << "Iterative Approach"
         << setw(25) << "Recursive Approach" << endl;
    cout << string(70, '-') << endl;
    cout << setw(20) << "Function Calls"
         << setw(25) << "1 call (loop-based)"
         << setw(25) << "Multiple calls (call stack)" << endl;
    cout << setw(20) << "Memory Usage"
         << setw(25) << "O(1) Fixed memory"
         << setw(25) << "O(N) Stack frames" << endl;
    cout << setw(20) << "Code Readability"
         << setw(25) << "Stateful loop variables"
         << setw(25) << "Direct mathematical syntax" << endl;
    cout << setw(20) << "Execution Speed"
         << setw(25) << "Fast (no stack overhead)"
         << setw(25) << "Overhead per call frame" << endl;

    return 0;
}