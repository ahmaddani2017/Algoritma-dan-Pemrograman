#include <iostream>

using namespace std;

bool ganjil(int a){
    if(a%2==1){
        return true;
    }else{
        return false;
    }
}

bool genap(int a){
    return a % 2 == 0; // int (bool) 5 : 0;
}

void genapterkecil(int ar[], int n){
    int min = ar[0];
    int index;
    for(int i=0; i<n; i++){
        if(!ganjil(ar[i])){
            if(ar[i]<min){
                min = ar[i];
                index = i;
            }
        }
    }
    cout << "Genap terkecil : " << min << endl;
    cout << "Index : " << index;
}

int main()
{
    int ar[5] = {6,7,4,3,2};
    int n = sizeof(ar) / sizeof(ar[0]);
    genapterkecil(ar,n);
    return 0;
}

