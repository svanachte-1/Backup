#include <iostream>

using namespace std;

int main()
{
    int nbcours=0;
    int note[5];
    float total;

    cout << "Veuillez entrer les nombre de cours : ";
    cin >> nbcours;

    string cours[nbcours];



    for(int i=0; i < nbcours; i++) {
        cout << "Vous etes au " << i+1 << " cours" << endl;
        cout << "Cours : ";
        cin >> cours[i];
        cout << "Note : ";
        cin  >> note[i];

        total += note[i];
        system("cls");
    } cout << "Votre Moyen est de " << total/nbcours << endl;




    return 0;
}
