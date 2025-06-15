#include <iostream>

using namespace std;

int main()
{
    int start, endd;

    cout << "Veuillez entrer le chiffre de debut : " << endl;
    cin >> start;
    cout << "Veuillez entrer le chiffre de fin : " << endl;
    cin >> endd;

    while (start < endd) {
        cout << start << " ";
        start++;
    }

    return 0;
}
