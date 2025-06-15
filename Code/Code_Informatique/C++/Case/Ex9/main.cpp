#include <iostream>

using namespace std;

int main()
{
    string REPAS;
    int choix;

    cout << "1. Steak - firtes" << endl;
    cout << "2. Moules - firtes" << endl;
    cout << "3. Sole meuniere" << endl;
    cout << "4. Ris de Veau a la creme" << endl;
    cout << "5. Homard a l'armoricaine" << endl;
    cin >> choix;

    switch (choix) {
            case 1:
                REPAS =  "Steak - firtes";
                break;
            case 2:
                REPAS =  "Moules - firtes";
                break;
            case 3:
                REPAS = "Sole meuniere";
                break;
            case 4:
                REPAS = "Ris de Veau a la creme";
                break;
            case 5:
                REPAS = "Homard a l'armoricaine";
                break;
            default:
                REPAS = "Rien";
                break;
            }

          if (REPAS=="Rien"){
                cout << "Cher client vous n'avez pas choisi de repas" << endl;
            }
            else {
                cout<< "Cher client vous avez choisi " << REPAS << endl;
            }
    return 0;
}
