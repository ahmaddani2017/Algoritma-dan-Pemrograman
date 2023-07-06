#include <iostream>

using namespace std;

enum agama{
    Islam,
    Kristen,
    Hindu,
    Buddha,
    Konghucu,
};

int main()
{
    agama religi;
    religi = Islam;
    cout << religi << endl;
    religi = Kristen;
    cout << religi << endl;
    religi = Hindu;
    cout << religi << endl;
    religi = Buddha;
    cout << religi << endl;
    religi = Konghucu;
    cout << religi << endl;
    return 0;
}
