#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int choix=0;
    int NbCars=0;
    int EtatCars[10];
    string ImCars[10];

    do {
        cout << "1. Ajouter un v�hicule\n2. Afficher tous les v�hicules\n3. Modifier l'�tat d'un v�hicule\n4. Compter les v�hicules par �tat\n5. Quitter" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
        case 1: {
            if (NbCars < 10) {
                cout << "Entrer l'immatriculation : ";
                cin >> ImCars[NbCars];

                cout << "Etat (1 = en r�paration, 2 = pr�t, 3 = rendu) : ";
                cin >> EtatCars[NbCars];

                if (EtatCars[NbCars] > 3 && EtatCars[NbCars] < 1) {
                    cout << "Etat invalide. V�hicule non ajout�";
                    system("pause");
                } else {
                    cout << "V�hicule ajout� avec succ�es ! "
                }

                NbCars += 1;
            } else {
                cout << "Garage plein. Impossible d'ajout� plus de v�hicule" << endl;
            }
        }
        case 2: {}
        case 3: {}
        case 4: {}
        default:{
            system("cls");
            cout << "Au revoir !" << endl;
            break;
        }
        }

    } while (choix != 5);
    return 0;
}
