#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Veuillez Entrer un chiffre entre 0 et 20" << endl;
    cin >> a;

    while (a < 0 || a > 20) {
        cout << "Erreur" << endl;
        cout << "Veuillez Entrer un chiffre entre 0 et 20" << endl;
        cin >> a;
    }

    cout << "Le Chiffre que vous avez entre est " << a << endl;
    return 0;
}
