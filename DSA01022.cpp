#include <iostream>
#include <set>
#define MAX 100

using namespace std;

int n , a[MAX], p[MAX], count = 0 ,k[MAX];

void Try(int i){
    for (int j = 1; j <= n ; j++){
        if (k[j] == 0) {
            k[j] = 1;
            a[i] = j;
            if (i == n){
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
            k[j] = 0; 
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        count = 0;
        cin >> n;
        for (int i = 1; i <= n;i++){
            cin >> p[i];
            k[i] = 0;
        }
        Try(1);
    }
}
