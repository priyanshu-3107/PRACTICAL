#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    cout << "1. Numeric Pattern\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << j;

        cout << endl;
    }

    cout << "\n2. Lowercase Alphabet Pattern\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << char('a' + j);

        cout << endl;
    }

    cout << "\n3. Uppercase Alphabet Pattern\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << char('A' + j);

        cout << endl;
    }

    cout << "\n4. Right Half Number Triangle\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << j;

        cout << endl;
    }

    cout << "\n5. Full Number Pyramid\n";

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << j;

        for (int j = i - 1; j >= 1; j--)
            cout << j;

        cout << endl;
    }

    cout << "\n6. Full Alphabet Pyramid\n";

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
            cout << " ";

        for (int j = 0; j < i; j++)
            cout << char('A' + j);

        for (int j = i - 2; j >= 0; j--)
            cout << char('A' + j);

        cout << endl;
    }

    return 0;
}