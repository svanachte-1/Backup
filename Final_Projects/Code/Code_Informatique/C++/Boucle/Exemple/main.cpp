#include <iostream>

using namespace std;

int main()
{
    cout << "exemple 1 : " <<endl;
    for (int ia=0; ia<=20;ia++) {
        cout << ia << endl;
    }

    cout << "exemple 2 : " <<endl;
    for (int ib=20; ib>=0;ib--) {
        cout << ib << endl;
    }

    cout << "exemple 3 : " <<endl;
    for (int ic=40; ic>=0;ic-=4) {
        cout << ic << endl;
    }
    return 0;
}
