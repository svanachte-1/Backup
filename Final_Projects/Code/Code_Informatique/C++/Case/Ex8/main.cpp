#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
    char p, n;
    int c;

    cout << "Quel est votre Prenom : ";
    cin >> p;

    cout << "Quel est votre nom : ";
    cin >> n;

    cout << "1. Un bon d'achat" << endl;
    cout << "2. Une bouteille de vin" << endl;
    cout << "3. Un coffret maquillage" << endl;
    cout << "4. Un panier garni" << endl;

    cout << "Veuillez Choisir une proposition : ";

    cin >> c;

    switch(c) {
    case 1 :
        system("cls");
        cout << "Bravo, " << n << " " << p << ", vous etes l'heureux gagner d'un bon d'achat" << endl;
        break;

    case 2 :
        system("cls");
        cout << "Bravo, " << n << " " << p << ", vous etes l'heureux gagner d'une bouteille de vin" << endl;
        break;

    case 3 :
        system("cls");
        cout << "Bravo, " << n << " " << p << ", vous etes l'heureux gagner d'un coffret maquillage" << endl;
        break;

    case 4 :
        system("cls");
        cout << "Bravo, " << n << " " << p << ", vous etes l'heureux gagner d'un panier garni" << endl;
        break;

    default:
        system("cls");
        cout << p << " Vous n'avez pas choisi de cadeau" << endl;
        break;
    }
    return 0;


}
