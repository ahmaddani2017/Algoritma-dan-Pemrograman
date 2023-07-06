#include <iostream>

using namespace std;

int swep(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void buble(int a[],int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[j] < a[i]){
                swep(&a[j], &a[i]);
            }
        }
    }
}

void insertion(int ar[], int n){
    int key, i, j;
    for(int i=1; i<n; i++){
        key = ar[i];
        j = i-1;
        while(j >= 0 && ar[j] > key){
            ar[j+1] = ar[j];
            j = j - 1;
        }
        ar[j+1] = key;
    }
}

int main(){
    int ar[] = {5,4,3,2,2,1,1};
    int n = 7;
    buble (ar,n);
    cout << "Bubble sorting : ";
    for(int i=6; i>=0; i--){
        cout << ar[i] << " ";
    }
    cout << endl;
    insertion (ar,n);
    cout << "Insertion sorting : ";
    for(int i=6; i>=0; i--){
        cout << ar[i] << " ";
    }
    return 0;
}
