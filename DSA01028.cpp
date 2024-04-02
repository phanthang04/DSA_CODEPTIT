#include <iostream>

using namespace std;

void isort(int a[], int n){
    int i, key, j;
    for (i = 1; i < n; i++){
        key = a[i];
        j = i-1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
    }
}

int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        isort(a, n);
        int l = 0, r = n -1;
        while( l < r){
            cout << a[r] << " " << a[l] << " ";
            r--;
            l++;
        }
        if (l == r)
            cout << a[l];
        cout << endl;
    }
}