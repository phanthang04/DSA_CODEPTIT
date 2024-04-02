#include <iostream>
#include <math.h>
using namespace std;

int a[1000001], n, p[1000001]={0};

void Try(int i){
    for (int j = n; j >= 1; j--){
        if(p[j] == 0){
            a[i] = j;
            p[j] = 1;
            if (i == n){
                for (int z = 1; z<= n;z++)
                    cout << a[z];
                cout << " ";
            }
            else
                Try(i+1);
            p[j] = 0;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){    
        cin >> n;
        for (int i = 1; i <= n; i++)
            a[i] = i;
        Try(1);
        cout << endl;
    }
    return 0;
}