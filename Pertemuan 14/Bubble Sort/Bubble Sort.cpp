#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void buble(int ar[], int n);
void keluaran(int ar[], int n);

int main()
{
    auto start = chrono::high_resolution_clock::now();
    int ar[10] = {10,3,5,9,2,1,6,4,7,8};
    cout << "Time complexity Bubble sort" << endl;
    int n = sizeof(ar) / sizeof(ar[0]);
    int stop;
    buble(ar, n);
    auto end = chrono::high_resolution_clock::now();
    keluaran(ar,n);
    double duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();
    cout << "Waktu eksekusi : " << duration << " ms" << endl;
    cout << "Space Complexity = " << sizeof(ar) + sizeof(n) + sizeof(start) + sizeof(stop) + sizeof(duration) + sizeof(buble(ar,n)) <<" Bytes";
    return 0;
}
void keluaran(int ar[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
}
void buble(int ar[], int n) {
    if (n==1)
        return;
    for (int i = 0; i<n-1; i++) {
        if (ar[i] > ar[i + 1]) {
            swap(ar[i], ar[i + 1]);
        }
    }
    buble(ar, n - 1);
}
