#include <iostream>

using namespace std;

typedef struct spd{
    string Merk = "Polygon";
    string Type = "Sepeda Gunung";
    int Tahun = 2013;
    string Harga = "2.000.000";
};

int main()
{
    sepeda spd;
    sepeda *bike;
    bike = &spd;
    cout << bike->Merk << endl;
    cout << bike->Type << endl;
    cout << bike->Tahun << endl;
    cout << bike->Harga << endl;
    return 0;
}
