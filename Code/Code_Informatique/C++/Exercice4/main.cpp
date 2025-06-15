#include <iostream>
// Vanachte Steeven
using namespace std;

int main()
{
    float n1=0, n2=0;
    cout << "Veuillez Entrer le 1er Entier : ";
    cin >> n1;

    cout << "Veuillez Entrer le 2ieme Entier : ";
    cin >> n2;

    n2 = n2+n1;

    cout << "Veuillez Entrer le 3ieme Entier : ";
    cin >> n1;

    n1 = n1+n2;

    cout << "Veuillez Entrer le 4ieme Entier : ";
    cin >> n2;

    n2 = n2+n1;

    cout << "Veuillez Entrer le 5ieme Entier : ";
    cin >> n1;

    n1 = n1+n2;

    cout << "La Moyenne des Nombre entier est de : " << n1/5 << endl;

    return 0;
}
