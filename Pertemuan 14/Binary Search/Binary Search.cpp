#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

int binary(int ar[], int kiri, int kanan, int target);

int main()
{
    auto start = high_resolution_clock::now();
    cout << "Time complexity Binary Search" << endl;
    int ar[] = {10,3,5,9,2,1,6,4,7,8};
    int n = sizeof(ar) / sizeof(ar[0]);
    int target = 8;
    int index = binary(ar, 0, n - 1, target);
    auto stop = high_resolution_clock::now();
    if(index != -1){
        cout << "Ditemukan pada " << index << endl;
    }else{
        cout << "Tidak ditemukan" << endl;
    }
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Execution time : " << duration.count() << " microseconds" << endl;
    cout << "Space Complexity = "<< sizeof(ar) + sizeof(n) + sizeof(start) + sizeof(stop) + sizeof(duration) + sizeof(index) <<" Bytes";
    return 0;
}

int binary(int ar[], int kiri, int kanan, int target){
    if(kiri > kanan){
        return -1;
    }
    int tengah = kiri + (kanan - kiri) / 2;
    if(ar[tengah] == target){
        return tengah;
    }else if(ar[tengah] > target){
        return binary(ar, kiri, tengah - 1, target);
    }else{
        return binary(ar, tengah + 1, kanan, target);
    }
    return -1;
}
