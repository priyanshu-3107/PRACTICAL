#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "Enter Number of Participants : ";
    cin >> n;

    string id[100], name[100];
    float score[100];

    for (int i = 0; i < n; i++)
    {
        cout << "\nParticipant " << i + 1 << endl;

        cout << "ID : ";
        cin >> id[i];

        cin.ignore();

        cout << "Name : ";
        getline(cin, name[i]);

        cout << "Score : ";
        cin >> score[i];
    }

    string searchID;

    cout << "\nEnter Participant ID to Search : ";
    cin >> searchID;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (id[i] == searchID)
        {
            cout << "\nParticipant Found\n";
            cout << "ID    : " << id[i] << endl;
            cout << "Name  : " << name[i] << endl;
            cout << "Score : " << score[i] << endl;

            found = true;
            break;
        }
    }

    if (!found)
        cout << "Participant Not Found\n";

    // Descending sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (score[i] < score[j])
            {
                swap(score[i], score[j]);
                swap(id[i], id[j]);
                swap(name[i], name[j]);
            }
        }
    }

    cout << "\nRanking List\n";

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". "
             << name[i] << " - "
             << score[i] << endl;
    }

    cout << "\nTop Three Performers\n";

    int limit = (n < 3) ? n : 3;

    for (int i = 0; i < limit; i++)
    {
        cout << i + 1 << ". "
             << name[i] << " - "
             << score[i] << endl;
    }

    return 0;
}