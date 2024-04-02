#include <iostream>
#include <set>
#define MAX 100

using namespace std;

int n , a[MAX], p[MAX], count = 0 ,k;

void Try(int i){
    for (int j = a[i-1] + 1; j <= n - k + i; j++){
        a[i] = j;
        if (i == k){
            int z = 1;
            while((z <= n) && (a[z] == p[z]))    z++;
            if (z > n){
                cout << ++count << endl;
                return;
            }
            else
                count++;
        }
        else
            Try(i+1);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        count = 0;
        cin >> n >> k;
        for (int i = 1; i <= k;i++){
            cin >> p[i];
        }
        Try(1);
    }
}
