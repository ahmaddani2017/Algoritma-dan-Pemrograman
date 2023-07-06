#include <iostream>

using namespace std;

//Operasi matematika
int penambahan(int i, int j){
    int k = i + j;
    return k;
}
int pengurangan(int i, int j){
    int k = i - j;
    return k;
}
int perkalian(int i, int j){
    int k = i * j;
    return k;
}
float pembagian(int i, int j){
    int k = i / j;
    return k;
}
int jumlah(int i[], int n){
    int sum=0;
    for (int j=1; j<=n; j++){
        sum = sum + i[j];
    }
    return sum;
}
float mean(int i[], int n){
    float sum=0;
    for (int k=1; k<=n; k++){
        sum = sum + i[k];
    }
    return sum/n;
}
int main()
{
    //Inputan Matematika
    int i,j;
    cout << "~~~~~~~~~~Matematika~~~~~~~~~~" << endl;
    cout << "Masukan angka ke-1 : ";
    cin >> i;
    cout << "Masukan angka ke-2 : ";
    cin >> j;

    //Pengoperasian
    cout << "Tambah = " << penambahan (i,j) << endl;
    cout << "Kurang = " << pengurangan (i,j) << endl;
    cout << "Kali = " << perkalian (i,j) << endl;
    cout << "Bagi = " << pembagian (i,j) << endl;
    cout << endl << "~~~~~~~~~~Array~~~~~~~~~~" << endl;

    //Inputan Array
    int n;
    cout << "Masukan Jumlah Array : ";
    cin >> n;
    int arr[n];
    cout << "Masukan Angka Array : ";
    for (int i=1; i<=n; i++){
        cin >> arr[i];
    }
    //Hasil
    cout << "Jumlah Array : " << jumlah(arr,n) << endl;
    cout << "Rata - rata Array : " << mean(arr,n) << endl;
    return 0;
}
