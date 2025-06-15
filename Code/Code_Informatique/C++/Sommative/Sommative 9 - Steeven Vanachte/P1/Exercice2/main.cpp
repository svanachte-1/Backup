#include <iostream>

using namespace std;

int main()
{
    float nba=0, pua=0, mtf=0;

    cout << "Combien de marchandise achetez-vous ? : ";
    cin >> nba;

    cout << "Quel est le prix unitaire de l'article ? : ";
    cin >> pua;
    /*
    si mtf < 100 => aucune remise applique
    si mtf >= 100 && mtf < 500 => remise 10%
    si mtf >= 500 => remise 20%
    si nba > 10 => Beacoup d'article
    */

    mtf = (nba*pua);
        if (mtf < 100) {
            mtf = mtf - (mtf/100)*0;
            cout << "Vous avez achete pour " << nba*pua << " euros, la remise est de " << ((nba*pua)/100)*0 << " euros. Vous payer " << mtf << " euros." << endl;
        } else {
            if (mtf >= 100 && mtf < 500){
                mtf = mtf - ((mtf/100)*10);
                cout << "Vous avez achete pour " << nba*pua << " euros, la remise est de "  << ((nba*pua)/100)*10 <<  " euros. Vous payer " <<  mtf << " euros." << endl;
            } else {
                if (mtf >= 500){
                    mtf = mtf -(mtf/100)*20;
                    cout << "Vous avez achete pour " << nba*pua << " euros, la remise est de " << ((nba*pua)/100)*20 << " euros. Vous payer " << mtf << " euros." << endl;
                }
            }

        }
        if (nba > 10) {
            cout << "Vous avez achete beaucoup d'articles" << endl;
        }

    return 0;
}
