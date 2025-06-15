#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    int c=0;
    vector <string> name;

    cout << "1) Encoder des eleves\n2) Supprimer des eleves\n3) Afficher les eleves\n4) Quitter" << endl;
    while (c!=4){
        cout << "\nVeuillez Choisir : ";
        cin >> c;
        switch(c){
            case 1:{
                cout << "Encoder des eleves" << endl;
                string namechoice;
                char a='n';

                do {
                    cout << "Veuillez Entrer un Eleve : ";
                    cin >> namechoice;
                    name.push_back(namechoice);
                    cout << "Voulez-vous encoder un nouvel eleve ? (o/n) : ";
                    cin >> a;
                } while (a=='o');

                break;
            }
            case 2:{
                cout << "Supprimer des eleves" << endl;
                char tmp = 'n';

                do {
                    tmp = 'n';
                    cout << "Voulez vous supprimer un eleve ? (o/n/q) : " ;
                    cin >> tmp;

                    if (tmp =='o') {
                        name.pop_back();
                    }

                } while (tmp != 'q');

                break;
                };
            case 3: {
                cout << "Afficher les eleves" << endl;
                cout << setw(10) << "N°" << setw(10) << "Eleve\n" << "----------|----------" << endl;

                for (int i; i<name.size(); i++) {
                        cout << setw(10) << i << setw(10) << name[i] << endl;
                }
                break;
                };
        };
        if ( c==4){
            cout << "Merci de votre visite !" << endl;
        }
    }
    return 0;
}
