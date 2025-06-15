#include <iostream>

using namespace std;

int main()
{
    int point=0;
    cout << "Quels sont vos Points : ";
    cin >> point;

    if (point > 20 || point < 0) {
        cout << "Les Points Entres ne sont Pas Juste" << endl;
    }

    cout <<"Terminer" << endl;
    return 0;
}
