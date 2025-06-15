#include <iostream>

using namespace std;

int main()
{
    int cours[10];
    int nb=0, nbt=-1;

    cout << "Veuillez Entrer un chiffre : ";
    cin >> nb;

    for(int i=0; i < 10; i++) {
      cours[i] = i;
    }

    while (nb >= cours[10]) {
        nb -= 1;
        nbt++;
        cout << cours[10] + nbt << endl;
    }

    cout << "Il y a " << nbt << " au dessus de 10";

    return 0;
}
