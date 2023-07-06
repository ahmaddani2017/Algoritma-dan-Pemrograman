#include <iostream>

using namespace std;

struct hit{
    float phi=3.14;
    int Luas_persegi_panjang(int panjang, int lebar){
        return panjang*lebar;
    }
    float Luas_lingkaran(int r){
        return 22*r*r/7;
    }
    float Volume_kerucut(int r, int t){
        return phi*r*r*t/3;
    }
    float Volume_bola(int r){
        return 4*phi*r*r*r/3;
    }
};

int main()
{
    hit hitung;
    cout << hitung.Luas_persegi_panjang(15,5) << endl;
    cout << hitung.Luas_lingkaran(15) << endl;
    cout << hitung.Volume_kerucut(15,5) << endl;
    cout << hitung.Volume_bola(15) << endl;
    return 0;
}
