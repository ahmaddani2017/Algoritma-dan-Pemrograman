#include <iostream>

using namespace std;

struct spd{
    string Merk = "Polygon";
    string Type = "Sepeda Gunung";
    int Tahun = 2013;
    string Harga = "2.000.000";
    };

int main()
{
    spd sepeda;
    cout << sepeda.Merk << endl;
    cout << sepeda.Type << endl;
    cout << sepeda.Tahun << endl;
    cout << sepeda.Harga << endl;
    return 0;
}
