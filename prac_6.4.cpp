#include <iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3], result[3][3] = {};

    cout << "Enter First 3x3 Matrix:\n";

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    cout << "Enter Second 3x3 Matrix:\n";

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> b[i][j];

    // Matrix multiplication
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
    }

    cout << "\nResultant Matrix:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << result[i][j] << " ";

        cout << endl;
    }

    // Merge sorted arrays
    int n1, n2;

    cout << "\nSize of First Sorted Array : ";
    cin >> n1;

    int x[100];

    for (int i = 0; i < n1; i++)
        cin >> x[i];

    cout << "Size of Second Sorted Array : ";
    cin >> n2;

    int y[100];

    for (int i = 0; i < n2; i++)
        cin >> y[i];

    int z[200];

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (x[i] < y[j])
            z[k++] = x[i++];
        else
            z[k++] = y[j++];
    }

    while (i < n1)
        z[k++] = x[i++];

    while (j < n2)
        z[k++] = y[j++];

    cout << "\nMerged Sorted Array:\n";

    for (int p = 0; p < k; p++)
        cout << z[p] << " ";

    return 0;
}