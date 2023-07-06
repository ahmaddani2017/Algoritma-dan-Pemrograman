#include<iostream>
#include<stdbool.h>

using namespace std;

//Deklarasi
bool isEven(int x);
bool isOdd(int x);
bool isFactor(int x, int y);
bool maxN(int a, int b);
bool minN(int a, int b);
int maxArray(int a[], int b);
int minArray(int a[], int b);
bool isFound(int e, int* aray, int n);
void swapN(int f, int g);

int main(){
    int a, b, c, d, e, f, g, h, i, n;
    cout << "~~~~~isEven~~~~~" << endl;
    cout << "Input angka : ";
    cin >> a;
    cout << "Benarkah? " << a << " Angka genap? " << isEven(a) << endl;
    cout << endl;

    cout << "~~~~~isOdd~~~~~" << endl;
    cout << "Input angka : ";
    cin >> b;
    cout << "Benarkah? " << b << " Angka ganjil? " << isOdd(b) << endl;
    cout << endl;

    cout << "~~~~~isFactor~~~~~" << endl;
    cout << "Benarkah? " << a << " Faktorisasi dari " << b << " ? " << isFactor(a,b) << endl;
    cout << endl;

    cout << "~~~~~maxN dan minN~~~~~" << endl;
    cout << "Input angka ke-1 : ";
    cin >> c;
    cout << "Input angka ke-2 : ";
    cin >> d;
    cout << "Benarkah " << c << " lebih besar dari " << d << " ? " << " " << maxN(c,d) << endl;
    cout << "Benarkah " << c << " lebih kecil dari " << d << " ? " << " " << minN(c,d) << endl;
    cout << endl;

    cout << "~~~~~maxArray dan minArray~~~~~" << endl;
    cout << "Input jumlah array : ";
    cin >> n;
    int aray[n]={};
    for(int i=0; i<n; i++){
        cout << "Input array ke-" << i+1 << " = ";
        cin >> aray[i];
    }
    cout << "Nilai Terkecil Array : " << minArray(aray,n) << endl;
    cout << "Nilai Terbesar Array : " << maxArray(aray,n) << endl;
    cout << endl;

    cout << "~~~~~isFound~~~~~" << endl;
    cout << "Input angka yang ingin dicari pada Array : ";
    cin >> e;
    cout << "Benarkah " << e << " ada pada Array tadi? " << isFound(e,aray,n) << endl;
    cout << endl;

    swapN(a,b);
    return 0;
}

bool isEven(int x){
    if(x % 2 == 0){
        return true;
    }else{
        return false;
    }
}

bool isOdd(int x){
    if(x % 2 == 1){
        return true;
    }else{
        return false;
    }
}

bool isFactor(int x, int y){
    if(x % y == 0){
        return true;
    }else{
        return false;
    }
}

bool maxN(int a, int b){
    if(a > b){
        return true;
    }else{
        return false;
    }
}

bool minN(int a, int b){
    if(a < b){
        return true;
    }else{
        return false;
    }
}

int maxArray(int A[], int n){
    int temp= A[0];
    for (int i=0; i<n; i++){
        if (A[i] > temp){
            temp = A[i];
        }
    }
    return temp;
}

int minArray(int A[], int n){
    int temp= A[0];
    for (int i=0; i<n; i++){
        if (A[i] < temp){
            temp = A[i];
        }
    }
    return temp;
}

bool isFound(int b, int a[], int x){
    for(int i=1; i<=x; i++){
        if(b == a[i]){
            return true;
        }
    }
    return false;
}

void swapN(int a, int b){
    cout << "Swap A : " << a << " dan B : " << b << " hasilnya = ";
    int tukar;
    tukar = a;
    a = b;
    b = tukar;
    cout << "A : " << a << " dan B : " << b;
}
