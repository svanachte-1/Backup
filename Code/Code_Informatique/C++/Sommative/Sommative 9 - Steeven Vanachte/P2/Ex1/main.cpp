#include <iostream>

using namespace std;

int main()
{
    int nb=0;
    string cadeau;

    cout << "Vous avez ete tire au sort et vous pouvez choisir parmi les cadeaux suivant : " << endl;
    cout << "1. un livre de poche\n2. une boite de chocolat\n3. un jeu skipbo\n4. un Rubik's Cube\n5. une place de cinema\n" << endl;

    cout << "Entrez votre chiffre : ";
    cin >> nb;

    switch (nb) {
    case 1:
        cadeau="un livre de poche";
        break;
    case 2:
        cadeau="une boite de chocolat";
        break;
    case 3:
        cadeau="un jeu skipbo";
        break;
    case 4:
        cadeau="un Rubick's Cube";
        break;
    case 5:
        cadeau="une place de cinema";
        break;
    default:
        cout << "Dommage mauvais chiffre, vous ne recevrez rien. Ce sera pour la prochaine fois" << endl;
}

if (nb > 0 && nb <= 5) {
    cout << "Bravo, vous avez gagne " << cadeau << ". Nous vous remercions d'avoir participe a notre jeu" << endl;
}

    return 0;
}
