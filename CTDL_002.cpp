#include <iostream>
#include <math.h>
using namespace std;

int a[1000001], n, k, count = 0, x[1000001];

int check(int g[], int n){
    long sum = 0;
    for (int i=1; i<= n; i++){
        if (g[i] == 1)
            sum += a[i];
    }
    if(sum == k)    return 1;
    return 0;
}

void Try(int i){
    for (int j = 0; j <= 1; j++){
        x[i] = j;
        if(i == n){
            if (check(x, n) == 1){
            for (int z = 1; z <=n; z++){
                if (x[z] == 1)
                    cout << a[z] << " ";
            }
            cout << endl;
            count ++;
            }
        }
        else    
            Try(i+1);
    }
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try(1);
    cout << count;
    return 0;
}