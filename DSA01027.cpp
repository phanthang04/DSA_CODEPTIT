#include <iostream>
#include <algorithm>
#define MAX 100

using namespace std;

int n , a[MAX], p[MAX], ok[MAX];

void Try(int i){
    for (int j = 1; j <= n; j++){
        if (!ok[j]){
            ok[j] = 1;
            a[i] = j;
            if (i == n){
                for (int z = 1; z<= n; z++)
                    cout << p[a[z]] << " ";
                cout << endl;
            }
            else
                Try(i+1);
            ok[j] = 0;
        }
    }
}

int main(){
	cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> p[i];
        ok[i] = 0;
    }
    sort(p, p+ n +1);
    Try(1);
}
