#include <iostream>

using namespace std;

int ples(int a, int b){ //penjumlahan
    if(b == 0){
        return a;
    }else{
        return 1 + ples(a, b-1);
    }
}

int men(int a, int b){ //pengurangan
    if(b == 0){
        return a;
    }else{
        return men (a-1, b-1);
    }
}

int times(int a, int b){ //perkalian
    if(b == 1){
        return a;
    }else{
        return a*b;
    }
}

float slice(float a, float b){ //pembagian harus menggunakan float karena ada hasil pembagian dibelakang koma
    if(b != 0){
        return a / b;
    }else if(a !=0){
        return b /a;
    }else {
        return 0;
    }
}

int renk(int a, int b){ //pangkat
    if(b == 1){
        return a;
    }else if(b > 1){
        return a * renk(a, b-1);
    }else{
        return 1;
    }
}

int f(int a){ //fibonacci
    if (a == 0 || a == 1){
        return 1;
    }else{
        return f(a - 1) + f(a - 2);
    }
}

int factor(int n){ //faktorisasi
    int hasil = 1;
    for(int i=n; i>=1; i--){
        hasil *= i;
    }
    return hasil;
}

int main(){
    int a, b;
    cout << "Masukan angka = ";
    cin >> a;
    cout << "Masukan angka ke dua = ";
    cin >> b;
    cout << "Penjumlahan = " << ples(a,b) << endl;
    cout << "Pengurangan = " << men(a,b) << endl;
    cout << "Perkalian   = " << times(a,b) << endl;
    cout << "Pembagian   = " << slice(a,b) << endl;
    cout << "Pangkat     = " << renk(a,b) << endl;
    cout << "Fibonacci dari = " << a << endl;
    for(int i=0; i<a; i++){
        cout << "Urutan ke " << i+1 << " = " << f(i) << endl;
    }
    cout << "Fibonacci dari = " << b << endl;
    for(int i=0; i<b; i++){
        cout << "Urutan ke " << i+1 << " = " << f(i) << endl;
    }
    cout << "Faktorisasi dari = " << a << " = " << factor(a) << endl;
    cout << "Faktorisasi dari = " << b << " = " << factor(b) << endl;
    return 0;
}
