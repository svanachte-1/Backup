#include <iostream>

using namespace std;

int main()
{
    char choix;

    cout << "Bonjour, voulez-vous continuer le test ? (o pour oui et n pour non)" << endl;
    cout << "Quel est votre choix ? ";
    cin >> choix;

    switch(choix) {
    case 'o':
        cout << "Nous sommes heureux de pouvoir encore vous compter parmi nous" << endl;
        break;
    case 'n':
        cout << "C'est dommage que vous nous quittiez deja. Une prochaine fois peut-etre ? " << endl;
        break;
    default:
        cout << "Vous n'avez pas entre une lettre valable, nous ne pouvons l'accepter." << endl;

    }
    return 0;
}
