#include <iostream>

using namespace std;

int main()
{
    int age=0;
    char sexe=0;

    cout << "Veuillez Entrer Votre Age : ";
    cin >> age;

    cout << "Veuillez Entrer Votre Sexe(F/M) : ";
    cin >> sexe;

    if (age < 18 && sexe=='M'){
        cout << "Bonjour Jeune Homme, vous Etes Mineur";
    };

    return 0;
}
