#include <iostream>

using namespace std;

int main()
{
    int entier[10];
    int v=0, nb=1;

    for (int i=0; i<10;i++) {
     cout << "Veuillez Saisir le Nombre " << i+1 << " : ";
     cin >> entier[i];
     system("cls");
    }

    cout << "Veuillez entrer un entier V : ";
    cin >> v;

    for (int i=0; i < 10; i++){
        if (entier[i] == v) {
            cout << "V est " << nb << " dans le tableau" <<endl;
                    if (nb == 10) {
            break;
        }
        } else {
           cout << "V ne se trouve pas dans le tableau" <<endl;
           if (nb == 9) {
                system("cls");
                cout << "V ne se trouve pas dans le tableau" <<endl;
           }
        }

        nb++;
    }

    return 0;
}
