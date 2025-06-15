#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a=0;

    do {
        cout << "Donner un nombre positif :" ;
        cin >> a;

        if (a<0) {
            cout << "Svp Positif" << endl;
        } else {
        cout << "sa racine carree est " << sqrt(a) << endl;
        }

    } while (a != 0);

    return 0;
}
