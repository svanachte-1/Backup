#include <iostream>

using namespace std;

int main()
{
    string choix, prn;
    do {
        cout << "Introduisez le prenom de la personne : ";
        cin >> prn;

        cout << "voulez-vous encore introduire un participant ? (o/n) : ";
        cin >> choix;

    } while(choix != "n");

    return 0;
}
