#include <iostream>

using namespace std;

int main()
{
    char n,s;

    cout << "Quel est votre nom : ";
    cin >> n;

    cout << "Quel est votre Prenom : ";
    cin >> p;

    cout << "Quel est votre Sexe (H/F) : ";
    cin >> s;

    switch(s) {
    case 'h':
        cout << "Bonjour Mr " << n << p << ", vous etes un homme ";
        break;

    case 'f':
        cout << "Bonjour Mme " << n << p << ", vous etes une femme ";
        break;
    default :
        cout << "Vous n'avez pas introduit la bonne lettre";
        break;
    }

    return 0;
}
