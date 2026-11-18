#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "********************************************" << endl;
    cout << "FILE ORGANIZATION & FILE OPERATIONS UTILITY" << endl;
    cout << "********************************************" << endl << endl;

    const string sourceFilename = "Document.txt";
    const string backupFilename = "BackupDocument.txt";

    // Part A - File Creation and Writing
    ofstream outFile(sourceFilename);
    if (!outFile.is_open()) {
        cerr << "Error: Unable to create " << sourceFilename << endl;
        return 1;
    }

    cout << sourceFilename << " Created Successfully\n" << endl;
    cout << "Enter File Contents" << endl;
    cout << "Programming Fundamentals Laboratory" << endl;
    cout << "Student Record Management System" << endl;
    cout << "File Handling Practical" << endl;

    outFile << "Programming Fundamentals Laboratory\n";
    outFile << "Student Record Management System\n";
    outFile << "File Handling Practical\n";
    outFile.close();

    cout << "\nData Written Successfully\n" << endl;

    // Part B - File Reading
    cout << "Reading " << sourceFilename << endl;
    ifstream inFile(sourceFilename);
    if (!inFile.is_open()) {
        cerr << "Error: Unable to open " << sourceFilename << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    if (inFile.eof()) {
        cout << "\nEnd of File Reached Successfully\n" << endl;
    }
    inFile.close();

    // Part C - File Copying
    cout << "Creating " << backupFilename << endl;
    ifstream src(sourceFilename);
    ofstream dst(backupFilename);
    if (!src.is_open() || !dst.is_open()) {
        cerr << "Error during file copying." << endl;
        return 1;
    }

    dst << src.rdbuf();
    src.close();
    dst.close();

    cout << "Contents Copied Successfully" << endl;
    cout << "Backup File Created Successfully\n" << endl;

    // Part D - Random File Access
    ifstream randFile(sourceFilename);
    if (randFile.is_open()) {
        // Move to position 37 (start of second line)
        randFile.seekg(37, ios::beg);
        streampos currentPos = randFile.tellg();
        cout << "Current File Position: " << currentPos << endl;
        cout << "Moving File Pointer..." << endl;
        cout << "Displaying Contents after Repositioning" << endl;

        getline(randFile, line);
        cout << line << endl << endl;

        // Resetting file pointer to beginning
        cout << "Resetting File Pointer" << endl;
        randFile.seekg(0, ios::beg);
        while (getline(randFile, line)) {
            cout << line << endl;
        }
        randFile.close();
    }

    cout << "\nProgram Executed Successfully" << endl;
    return 0;
}