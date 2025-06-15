#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a=0;
    int b[10];
    while (a != 5) {
            system("cls");
            cout << "Menu\n1. Introduire des numeros\n2. Affichage des nombres rentres\n3. Tri et affichage des nombres dans l'ordre croissant\n4. Demande et confirmation d'un numero\n5. Quitter\nQuel est votre choix ? : ";
            cin >> a;
        switch(a)
        {
        case 1:{
            system("cls");
            for(int i; i < 11; i++) {
                cout << "Introduisze le chiffre n° " << i << " : ";
                cin >> b[i];
            };
            system("PAUSE");

            break;
        };
        case 2:{
            system("cls");
            cout << "chiffre position\n------- --------" << endl;
            for (int i=0; i<11; i++) {
                cout << setw(10) << b[i] << setw(10) << i << endl;
            }
            system("PAUSE");
            break;
        }
        case 3:{
            system("cls");
            cout << "Voici les chiffres par ordre croissant : " << endl;
            int tmp_tbl[10];
            int tmp_compare = 0;
            /* si copie le nombre du tableau alors remplace par -1*/
            for (int i=0; i<11; i++) {

            }
            system("PAUSE");
            break;
        };
        case 4:{
            system("cls");
            int tmp_chiffre=0;
            cout << "Veuillez introduire votre chiffre  : " ;
            cin >> tmp_chiffre;
            for (int i=0;i<11; i++) {
                if (tmp_chiffre == b[i]){
                    cout << "Le chiffre " << tmp_chiffre <<  " est dans le tableau" << endl;
                } else {
                    cout << "Le chiffre " << tmp_chiffre << " n'est pas dans le tableau" << endl;
                }
            }
            system("PAUSE");
            break;
            };
        case 5:{
            cout << "Merci d'avoir participe" << endl;
            system("PAUSE");
            break;
        }
        default:{
            cout << "Le chiffre entre n'est pas valide";
            system("PAUSE");
            break;
            };
        };
    };

    return 0;
}
