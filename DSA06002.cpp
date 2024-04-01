#include <iostream>
#include <math.h>

using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void ssort(int b[],int a[], int n){
    int i, min, j;
    for (i = 0; i < n; i++){
        min = i;
        for (int j = i+1; j < n; j++){
            if(a[j] < a[min])
                min = j;
        }
        swap(&a[min], &a[i]);
        swap(&b[min], &b[i]);
    }
}

int main(){
    int t;  cin >> t;
    while(t--){
        int n, k;  cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = abs(k-a[i]);
        }
        ssort(a, b, n);
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}