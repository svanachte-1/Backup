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
        cout << "1. Ajouter un véhicule\n2. Afficher tous les véhicules\n3. Modifier l'état d'un véhicule\n4. Compter les véhicules par état\n5. Quitter" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
        case 1: {
            if (NbCars < 10) {
                cout << "Entrer l'immatriculation : ";
                cin >> ImCars[NbCars];

                cout << "Etat (1 = en réparation, 2 = prêt, 3 = rendu) : ";
                cin >> EtatCars[NbCars];

                if (EtatCars[NbCars] > 3 && EtatCars[NbCars] < 1) {
                    cout << "Etat invalide. Véhicule non ajouté";
                    system("pause");
                } else {
                    cout << "Véhicule ajouté avec succées ! "
                }

                NbCars += 1;
            } else {
                cout << "Garage plein. Impossible d'ajouté plus de véhicule" << endl;
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
