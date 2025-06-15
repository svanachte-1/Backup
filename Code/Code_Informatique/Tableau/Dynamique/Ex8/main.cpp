#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    vector <string> NOM;
    vector <string> PRENOM;
    vector <string> choix;

    string tmp_nom, tmp_prenom, tmp_choix;
    char a = 'o';
    while (a=='o') {
        cout << "Voulez-vous encoder des eleves ? (o/n) : ";
        cin >> a;
        if (a=='o') {
            cout << "Quel est le Nom : ";
            cin >> tmp_nom;
            NOM.push_back(tmp_nom);

            cout << "Quel est le Prenom : ";
            cin >> tmp_prenom;
            PRENOM.push_back(tmp_prenom);


            cout << "1. Repas chaud\n2. Sandwich et soupe\n3. Soupe seule" << endl;

            cout << "Quel est votre choix : ";
            cin >> tmp_choix;
            choix.push_back(tmp_choix);
        }
    }

    cout << setw(10) << "Nom" << setw(10) << "Prenom" << setw(10) << "Choix" << endl;

    for(int i =0; i < NOM.size(); i++) {
        cout << setw(10) << NOM[i] << setw(10) << PRENOM[i] << setw(10) << choix[i] << endl;
    }

    return 0;
}
