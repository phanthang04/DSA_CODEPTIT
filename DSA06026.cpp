#include <iostream>

using namespace std;

void bubble_sort(int a[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        int res = 0;
        for (int j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]){
                res = 1;
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        if (res == 1){
            cout << "Buoc " << ++count << ": ";
            for (int z = 0; z < n; z++){
                cout << a[z] << " ";
            }
            cout << endl;
            res = 0;
        }
    }
}

int main(){
    int n;  cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    bubble_sort(a, n);
}