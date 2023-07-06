#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void Insertion(int*ar, int n);
void keluaran(int ar[], int n);

int main()
{
    auto start = chrono::high_resolution_clock::now();
    int ar[10] = {10,3,5,9,2,1,6,4,7,8};
    cout << "Time complexity Insertion Sort" << endl;
    int n = sizeof(ar) / sizeof(ar[0]);
    int stop;
    Insertion(ar, n);
    auto end = chrono::high_resolution_clock::now();
    keluaran(ar, n);
    double duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();
    cout << "Waktu eksekusi : " << duration << " ms" << endl;
    cout << "Space Complexity = " << sizeof(ar) + sizeof(n) + sizeof(start) + sizeof(stop) + sizeof(duration) + sizeof(Insertion(ar,n)) <<" Bytes";
    return 0;
}
void keluaran(int ar[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
}
void Insertion(int*ar, int n){
    if(n <= 1)
        return;
    Insertion(ar, n-1);
    int lanjut = ar[n-1];
    int akhir = n-2;
    while(akhir >= 0 && ar[akhir] > lanjut){
        swap(ar[akhir], ar[akhir+1]);
        akhir--;
    }
    ar[akhir + 1] = lanjut;
}
