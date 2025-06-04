#include <iostream>
using namespace std;

int main()
{

    int choice, type;
    cout << "---------song list------" << endl;
    cout << "press 1 for old song" << endl;
    cout << "press 2 for arijit's song" << endl;
    cout << "press 3 for english song" << endl;
    cout << "press 4 for korean song" << endl;

    cout << "Enter Choice:";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You press 1 for old song" << endl;
        cout << "---------song list------" << endl;
        cout << "press 1 for Kumar sanu song" << endl;
        cout << "press 2 for alka yagnik's song" << endl;
        cout << "press 3 for asha bhosle song" << endl;
        cout << "press 4 for lata mangeshkar song" << endl;
        cout << "press 5 for mohammed rafi song" << endl;
        cout << "Enter type:";
        cin >> type;

        if (type == 1)
        {
            cout << "Kumar sanu song";
        }
        else if (type == 2)
        {
            cout << "alka yagnik's song";
        }
        else if (type == 3)
        {
            cout << "asha bhosle song";
        }
        else if (type == 4)
        {
            cout << "lata mangeshkar song";
        }
        else if (type == 5)
        {
            cout << "mohammed rafi song";
        }

        break;
    case 2:
        cout << "You press 2 for arijit's song" << endl;
        cout << "---------song list------" << endl;
        cout << "press 1 for Bandeya Rey Bandeya" << endl;
        cout << "press 2 for O maahi" << endl;
        cout << "press 3 for Tera yaar hoon main " << endl;
        cout << "press 4 for jaaniya" << endl;
        cout << "press 5 for zaalima" << endl;
        cout << "Enter type:";
        cin >> type;

        if (type == 1)
        {
            cout << "Bandeya Rey Bandeya";
        }
        else if (type == 2)
        {
            cout << "O maahi song";
        }
        else if (type == 3)
        {
            cout << "Tera yaar hoon main song";
        }
        else if (type == 4)
        {
            cout << "jaaniya";
        }
        else if (type == 5)
        {
            cout << " zaalima song";
        }

        break;
    case 3:
        cout << "You press 3 for english song" << endl;
        cout << "---------song list------" << endl;
        cout << "press 1 for Favorite song" << endl;
        cout << "press 2 for Until I Found You song" << endl;
        cout << "press 3 for See You Again song" << endl;
        cout << "press 4 for Why Not Me? song" << endl;
        cout << "press 5 for stay with me song" << endl;
        cout << "Enter type:";
        cin >> type;

        if (type == 1)
        {
            cout << "favourite song";
        }
        else if (type == 2)
        {
            cout << "Until I Found You song";
        }
        else if (type == 3)
        {
            cout << "See You Again song";
        }
        else if (type == 4)
        {
            cout << "Why Not Me? song";
        }
        else if (type == 5)
        {
            cout << "stay with me  song";
        }

        break;
    case 4:
        cout << "You press 4 for korean song" << endl;
        cout << "---------song list------" << endl;
        cout << "press 1 for Gangnam Style song" << endl;
        cout << "press 2 for Kill This Love song" << endl;
        cout << "press 3 for butter song" << endl;
        cout << "press 4 for yet to come song" << endl;
        cout << "press 5 for dynamite song" << endl;
        cout << "Enter type:";
        cin >> type;

        if (type == 1)
        {
            cout << "Gangnam Style song";
        }
        else if (type == 2)
        {
            cout << "Kill This Love song";
        }
        else if (type == 3)
        {
            cout << "butter song";
        }
        else if (type == 4)
        {
            cout << " yet to come song";
        }
        else if (type == 5)
        {
            cout << "dynamite song";
        }

        break;

    default:
        cout << "You press wrong key" << endl;
        break;
    }

    return 0;
}