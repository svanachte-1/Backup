#include <iostream>

using namespace std;

int main()
{
    string name[3];
    int age[3];

    for(int i=0; i < 3; i++){
        cout << "Votre Nom : " ;
        cin >> name[i];
        cout << "Votre Age : " ;
        cin >> age[i];
    }
    system("pause");
    system("cls");

    for(int i=0; i < 3; i++){
        cout << "Bonjour " << name[i] << " tu as " << age[i] << " ans" << endl;
    }

    return 0;
}
