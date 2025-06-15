#include <iostream>

using namespace std;

int main()
{
    int user=0;

    cout << "Veuillez entrer le chiffre entier positif : " << endl;
    cin >> user;

        while (0 <= user) {
            cout << user << " ";
            user--;
        }

    return 0;
}
