#include <iostream>

using namespace std;

int main()
{
    int h=0, mdp=0;
    string tu="";

    cout << "Veuillez entrer l'heure : ";
    cin >> h;

    cout << "Veuillez entrer votre type d'utilisateur (administrateur, user ou invite) : ";
    cin >> tu;

    cout << "Veuillez introduire votre mot de passe : ";
    cin >> mdp;

    if (mdp == 1234) {
            if (tu == "user") {
                if (h >= 8 && h <= 18) {
                    cout << "Bonjour, vous avez acces au ressource basique" << endl;
                } else {
                    cout << "Bonjour, vous avez un acces restreint aux informations" << endl;
                }
            }
            if (tu == "administrateur") {
                    cout << "Bonjour, vous avez un acces illimite" << endl;
            }
            if (tu == "invite") {
                    if (h >= 9 && h <= 17) {
                        cout << "Bonjour, vous avez un acces restreint aux informations" << endl;
                    } else {
                        cout << "Bonjour, n'avez acces a rien" << endl;
                    }
            }
    } else {
        cout << "Votre mot de passe est incorrect, vous n'avez acces a rien " <<endl;
    }
    return 0;
}
