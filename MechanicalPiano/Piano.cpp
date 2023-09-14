#include <iostream>

using namespace std;

enum note
{
    C = 1,
    D = 2,
    E = 4,
    F = 8,
    G = 16,
    A = 32,
    B = 64
};

int main() {
    int melody[12];

    cout << "Input note combinations: ";

    for (int i = 0; i < 12; i++)
    {
        cin >> melody[i];
    }

    for (int i = 0; i < 12; i++) 
    {
        char notes_charAr[6];
        sprintf(notes_charAr, "%d", melody[i]);
        string notes = notes_charAr;

        for (int j = 0; j < notes.length(); j++)
        {
            char note = notes[j];
            unsigned int a = 1 << (int)(note) - 49;

            if (a & C) 
            {
                cout << "DO ";
            }
            else if (a & D)
            {
                cout << "RE ";
            }
            else if (a & E)
            {
                cout << "MI ";
            }
            else if (a & F)
            {
                cout << "FA ";
            }
            else if (a & G)
            {
                cout << "SOL ";
            }
            else if (a & A)
            {
                cout << "LA ";
            }
            else if (a & B)
            {
                cout << "SI ";
            }
        }
        cout << "\n";
    }
    cout << "\n";
    system("pause");
}
