#include <iostream>

using namespace std;

int main()
{
    int start=0, endd=0;

    cout << "Veuillez entrer le chiffre de debut : " << endl;
    cin >> start;
    cout << "Veuillez entrer le chiffre de fin : " << endl;
    cin >> endd;

        while (start < endd) {
            cout << start << " ";
            start++;
        }
        while (endd < start) {
            cout << start << " ";
            start--;
        }

    return 0;
}
