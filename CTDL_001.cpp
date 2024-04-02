#include <iostream>
#include <math.h>
using namespace std;

int a[1000001], n;

int check(int a[], int n){
    int l = 1, r = n;
    while(l<r){
        if (a[l] != a[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}

void Try(int i){
    for (int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n){
            if (check(a, n) == 1){
            for (int z = 1; z <=n; z++)
                cout << a[z] << " ";
            cout << endl;}
        }
        else    
            Try(i+1);
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        a[i] = i;
    Try(1);
    return 0;
}