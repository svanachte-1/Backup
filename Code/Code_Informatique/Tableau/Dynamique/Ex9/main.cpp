#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool tri(string a, string b) {
    return a > b;
}
int main()
{
    vector <string> tbl;
    string tmp_tbl;
    int a=0;

    while (a!=4){
        cout << "1) Entrer des donnees\n2) Afficher les tableau dans l'ordre croissant\n3) Afficher les tableau dans l'ordre decroissant\n4) Quitter\n Votre Choix : " ;
        cin >> a;

        switch (a){
        case 1: {
            system('cls');
            char choix = 'o';

            while(choix == 'o'){
            cout << "Voulez-vous entrer des donnees (o/n) : ";
            cin >> choix;
            if (choix == 'o') {
                cout << "Veuillez entrer des donnees : ";
                cin >> tmp_tbl;
                tbl.push_back(tmp_tbl);
                }
            }
            break;
        }

        case 2:
            system('cls');
            sort(tbl.begin(), tbl.end());
            for (int i=0; i<tbl.size(); i++) {
                cout << tbl[i] << endl;
            }
            break;

        case 3:
            system('cls');
            sort(tbl.begin(), tbl.end(), tri);
            for (int i=0; i<tbl.size(); i++) {
                cout << tbl[i] << endl;
            }
            break;
        }
    }
    return 0;
}
