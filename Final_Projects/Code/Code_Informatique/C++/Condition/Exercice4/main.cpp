#include <iostream>

using namespace std;

int main()
{
    int point=0;
    cout << "Quels sont vos Points : ";
    cin >> point;

    if (point > 20) {
        cout << "Les Points sont Trop Eleves" << endl;
    }
    else if (point < 0) {
        cout << "Les Points sont Negatifs, Impossible" << endl;
    }

    cout <<"Terminer" << endl;
    return 0;
}
