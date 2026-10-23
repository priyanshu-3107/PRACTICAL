#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    string text;

    cout << "Enter Paragraph:\n";
    getline(cin, text);

    int characters = text.length();
    int alphabets = 0;
    int digits = 0;
    int special = 0;
    int words = 0;

    bool insideWord = false;

    for (char c : text)
    {
        if (isalpha(c))
            alphabets++;
        else if (isdigit(c))
            digits++;
        else if (!isspace(c))
            special++;

        if (!isspace(c) && !insideWord)
        {
            words++;
            insideWord = true;
        }
        else if (isspace(c))
        {
            insideWord = false;
        }
    }

    cout << "\nCharacters : " << characters;
    cout << "\nWords      : " << words;
    cout << "\nAlphabets  : " << alphabets;
    cout << "\nDigits     : " << digits;
    cout << "\nSpecial    : " << special << endl;

    // First and last character
    cout << "\nFirst Character : " << text.front();
    cout << "\nLast Character  : " << text.back() << endl;

    // First and last word
    size_t firstSpace = text.find(' ');
    size_t lastSpace = text.rfind(' ');

    cout << "First Word : "
         << text.substr(0, firstSpace) << endl;

    cout << "Last Word : "
         << text.substr(lastSpace + 1) << endl;

    // Concatenation
    string additional;

    cout << "\nEnter Additional Sentence:\n";
    getline(cin, additional);

    text += " " + additional;

    cout << "\nUpdated Paragraph:\n";
    cout << text << endl;

    // Search
    string keyword;

    cout << "\nEnter Search Keyword : ";
    cin >> keyword;

    size_t position = text.find(keyword);

    if (position != string::npos)
    {
        cout << "Keyword Found\n";
        cout << "First Occurrence Position : "
             << position << endl;
    }
    else
    {
        cout << "Keyword Not Found\n";
    }

    // Uppercase
    string upper = text;

    for (char &c : upper)
        c = toupper(c);

    cout << "\nUppercase:\n" << upper << endl;

    // Lowercase
    string lower = text;

    for (char &c : lower)
        c = tolower(c);

    cout << "\nLowercase:\n" << lower << endl;

    // Reverse
    string reversed = text;
    reverse(reversed.begin(), reversed.end());

    cout << "\nReverse:\n" << reversed << endl;

    // Palindrome
    string word;

    cout << "\nEnter Word for Palindrome Check : ";
    cin >> word;

    string temp = word;
    reverse(temp.begin(), temp.end());

    if (word == temp)
        cout << "Result : Palindrome\n";
    else
        cout << "Result : Not Palindrome\n";

    // Standard functions
    cout << "\nString Length : " << text.length() << endl;

    string copied = text;
    cout << "String Copied Successfully\n";

    cout << "Comparison Result : "
         << (text == copied ? "Equal" : "Not Equal") << endl;

    string str1 = "Hello ";
    string str2 = "World";

    string combined = str1 + str2;

    cout << "Concatenation : " << combined << endl;

    if (text.find(keyword) != string::npos)
        cout << "Substring Search : Found\n";
    else
        cout << "Substring Search : Not Found\n";

    return 0;
}