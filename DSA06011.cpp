#include <iostream>
#include <math.h>

using namespace std;

int p[10001];
int n;
int minn;
int a[10001];

void Try(int i){
    for (int j = p[i-1] +1; j <= n-2+i;j++){
        p[i] = j;
        if (i == 2){
            int sum = a[p[2]] + a[p[1]];
            if (abs(minn) > abs(sum)) minn = sum;
        }
        else
            Try(i+1);
    }
}

int main(){
    int t;  cin >> t;
    while(t--){  
        cin >> n;
        for (int i = 1; i <= n; i++)    cin >> a[i];
        minn = a[1]+a[2];
        Try(1);
        cout << minn << endl;
    }
}