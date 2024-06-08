// THÁP HÀ NỘI

#include <iostream>

using namespace std;

void towerHN(int n, char a, char b, char c){
    if (n == 1) {
        cout << a << " -> " << c << endl;
        return;
    }
    towerHN(n-1, a, c, b);
    towerHN(1, a, b, c);
    towerHN(n-1, b, a ,c);
}

int main(){
    int n;
    cin >> n;
    towerHN(n, 'A', 'B', 'C');
}