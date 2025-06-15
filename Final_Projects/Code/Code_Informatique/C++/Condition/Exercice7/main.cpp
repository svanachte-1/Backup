#include <iostream>

using namespace std;

int main()
{
    float p1=0, p2=0, p3=0, p4=0;

    cout << "Veuillez Entrer vos Point de Votre 1er Branche sur 20";
    cin >> p1;

    cout << "Veuillez Entrer vos Point de Votre 2ieme Branche sur 20";
    cin >> p2;

    cout << "Veuillez Entrer vos Point de Votre 3ieme Branche sur 20";
    cin >> p3;

    p4 = p1+p2+p3;

    if (p4 < 30) {
        cout << "Echec";
    }
    if (p4 <= 30 && p4 >= 40){
        cout << "Satisfaisant";
    }
        if (p4 <= 40 && p4 >= 50){
        cout << "Bien";
    }
        if (p4 <= 50 && p4 >= 55){
        cout << "Très Bien";
    }
        if (p4 < 55){
        cout << "Excellent";
    }

    return 0;
}
