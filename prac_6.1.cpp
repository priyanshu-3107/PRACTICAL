#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int n;

    cout << "SPORTS EVENT SCORE ANALYSIS\n";
    cout << "Enter Number of Participants : ";
    cin >> n;

    string id[100], name[100];
    float score[100];

    float total = 0;
    float highest, lowest;

    for (int i = 0; i < n; i++)
    {
        cout << "\nParticipant " << i + 1 << endl;

        cout << "Participant ID : ";
        cin >> id[i];

        cin.ignore();

        cout << "Participant Name : ";
        getline(cin, name[i]);

        cout << "Score : ";
        cin >> score[i];

        total += score[i];

        if (i == 0)
        {
            highest = lowest = score[i];
        }
        else
        {
            if (score[i] > highest)
                highest = score[i];

            if (score[i] < lowest)
                lowest = score[i];
        }
    }

    cout << "\n--------------------------------------\n";
    cout << "Participant Performance\n";
    cout << "--------------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << id[i] << "\t"
             << name[i] << "\t"
             << score[i] << endl;
    }

    cout << fixed << setprecision(2);

    cout << "\nTotal Score   : " << total;
    cout << "\nAverage Score : " << total / n;
    cout << "\nHighest Score : " << highest;
    cout << "\nLowest Score  : " << lowest << endl;

    return 0;
}