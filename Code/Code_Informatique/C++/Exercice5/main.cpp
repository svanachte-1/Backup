#include <iostream>
// Vanachte Steeven

using namespace std;

int main()
{
    float ht=0, kg=0, tva=0;

    cout << "Veuillez Entrer le Prix HT d'un Kilo de Tomates : ";
    cin >> ht;

    cout << "Veuillez Entrer le Nombre de Kilo Acheter : ";
    cin >> kg;

    cout << "Veuillez Entrer le Taux de la TVA : ";
    cin >> tva;

    cout << "\nJ'ai Achete " << kg <<" Kg de Tomates" << "\nLe Kilo Coute " << ht << " Euros Pour 1 Kilo " << endl;
    cout << "Ce Qui me Fait un Total Hors TVA de " << ht*kg << " Euros \n\nLa TVA est de " << (tva*(kg*ht))/100 << " Euros" <<endl;
    cout << "\nLe Total a Payer est Donc de " << ht*kg+((tva*(kg*ht))/100) << " Euros" << endl;
    return 0;
}
