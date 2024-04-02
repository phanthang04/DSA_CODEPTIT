#include <iostream>
#include <iomanip>
#define p 64
#define MAX 100

using namespace std;

int n , k, a[MAX];

void Try(int i){
    for (int j = a[i-1]+1; j <= n-k +i; j++){
        a[i] = j;
        if (i == k){
            for (int z = 1; z <= k; z++)
                cout << char(a[z] + p);
            cout << endl;
        }
        else    
            Try(i+1);
    }
}

int main(){
	int t;
	cin >> t;
    a[0] = 0;
	while(t--){
		cin >> n >> k;
        Try(1);
	}
}
