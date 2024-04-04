#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++){
        int m = a[i], k = i;
        for (int j = i + 1; j < n; j++){
            if (m > a[j]){
                m = a[j];
                k = j;        
            } 
        }
        swap(a[i], a[k]);
        cout << "Buoc " << i + 1 << ": ";
        for (int j = 0; j < n; j++) cout << a[j] << " "; cout << endl;
    }
    return 0;
}