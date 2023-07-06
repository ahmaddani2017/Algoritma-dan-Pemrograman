#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void selection(int ar[], int n, int awal);
void keluaran(int ar[], int n);

int main()
{
    auto start = chrono::high_resolution_clock::now();
    int ar[10] = {10,3,5,9,2,1,6,4,7,8};
    cout << "Time complexity Selection Sort" << endl;
    int n = sizeof(ar) / sizeof(ar[0]);
    int stop;
    selection(ar, n, 0);
    auto end = chrono::high_resolution_clock::now();
    keluaran(ar, n);
    double duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();
    cout << "Waktu eksekusi : " << duration << " ms" << endl;
    cout << "Space Complexity = " << sizeof(ar) + sizeof(n) + sizeof(start) + sizeof(stop) + sizeof(duration) + sizeof(selection(ar, n, 0)) <<" Bytes";
    return 0;
}
void keluaran(int ar[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
}

void selection(int ar[], int n, int awal){
    if(awal<n){
        int min_index = awal;
        for(int i = awal + 1; i < n+1 ; i++){
            if(ar[i]<ar[min_index])
                min_index = i;
        }
        swap(ar[min_index], ar[awal]);
        selection(ar,n,awal+1);
    }
}
