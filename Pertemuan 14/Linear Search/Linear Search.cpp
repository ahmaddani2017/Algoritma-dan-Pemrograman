#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

int linear(int ar[], int key, int awal, int akhir);

int main()
{
    auto start = high_resolution_clock::now();
    cout << "Time complexity Linear Search" << endl;
    int ar[10] = {10,3,4,6,2,7,8,9,5};
    int n = sizeof(ar) / sizeof(ar[0]);
    int key = 9;
    int index = linear(ar, 0, n - 1, key);
    auto stop = high_resolution_clock::now();
    if(index != -1){
        cout << "ditemukan pada indeks " << index << endl;
    }else{
        cout << "tidak ditemukan dalam array" << endl;
    }
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Execution time : " << duration.count() << " microseconds" << endl;
    cout << "Space Complexity = "<< sizeof(ar) + sizeof(n) + sizeof(start) + sizeof(stop) + sizeof(duration) + sizeof(index) <<" Bytes";
    return 0;
}

int linear(int ar[], int key, int awal, int akhir){
    if(awal > akhir){
        return -1;
    }
    if(ar[awal] == key){
        return awal;
    }
    return linear(ar, key, awal + 1, akhir);
}
