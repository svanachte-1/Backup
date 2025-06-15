/*Librairie-----------------------------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
/*Variable------------------------------------------------------------------------------------------------------------------------------------------------*/
    vector <int> age;
    vector <string> ne;
    float age_tmp = 0;
    int a = 1;
    string b;

/*Boucle-Do-While-----------------------------------------------------------------------------------------------------------------------------------------*/
    do {
        string ne_tmp;

        cout << "Veuillez entrer l'age de l'etudiant : " ;
        cin >> age_tmp;
        age.push_back(age_tmp);

        cout << "Veuillez entrer le nom de l'etudiant : " ;
        cin >> ne_tmp;
        ne.push_back(ne_tmp);


        cout << "Voullez vous arreter d'introduire des etudiant ? (o/n) : " ;
        cin >> b;
        /*Condition pour sortire------------------------------------------------------------------------------------------------------------------------*/

        if (b=="o") {
            a=0;
        }

    } while (a==1);

/*Affichage du tableau avec age et nom--------------------------------------------------------------------------------------------------------------------*/
    cout <<  setw(10) << "Nom" << setw(12) << "Age\n" <<  "---------- " << "----------"<< endl;
    for (int i=0; i < ne.size(); i++) {
        cout << setw(10) << ne[i] << setw(10) << age[i] << endl;
    }

/*Somme toutes les valeur du tableau age-----------------------------------------------------------------------------------------------------------*/
    age_tmp=0;
    for (int i=0; i<age.size(); i++) {
        age_tmp += age[i];
    }

/*Calcul Moyenne et affichage du nombre d'etudiant et des leur moyenne--------------------------------------------------------------------------*/
    age_tmp = age_tmp/age.size();
    cout << "Age moyen : " << age_tmp << "\nNombre d'etudiant : "<< ne.size()<< endl;

    return 0;
}
