#include <iostream>

using namespace std;

int main(){
    int n;  cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Buoc 0: " << a[0] << endl; 
    for (int i = 1; i < n; i++){
        cout << "Buoc " << i << ": ";
        int key = a[i];
        int j = i -1;
        while (j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        for (int z = 0; z <= i; z++)
            cout << a[z] << " ";
        cout << endl;
    }
}