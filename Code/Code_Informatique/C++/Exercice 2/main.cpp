#include <iostream>
// Vanachte Steeven
using namespace std;

int main()
{
    int l=0, L=0;
    cout << "Veuillez Entrer la Largeur du Champs : ";
    cin >> L;

    cout << "Veuillez Entrer la longueur du Champs : ";
    cin >> l;

    cout << "La Surface est de " << l*L << endl;
    cout << "Le Perimetre est de " << (l+L)*2 << endl;

    return 0;
}
