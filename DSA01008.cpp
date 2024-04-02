#include <iostream>
#include <set>
#define MAX 100

using namespace std;

int n , a[MAX], p[MAX], count = 0 ,k;

int check(){
    for (int i = 1; i <= n; i++){
        if (a[i] == 1)  
            count ++;
    }
    if (count == k) return 1;
    return 0;
}

void Try(int i){
    for (int j = 0; j <= 1 ; j++){
        a[i] = j;
        if (i == n){
            count = 0;
            if (check()){
                for (int z = 1; z <= n; z++){
                    cout << a[z];
                }
                cout << endl;
            }
        }
        else
            Try(i+1);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n>>k;
        Try(1);
    }
}
