#include <iostream>

using namespace std;

int n, a[17];


void inkq(){
    for (int i = 1; i <= n; i++){
        if(a[i] == 0){
            cout << "A";
        }
        else    
            cout << "H";
    }
    cout << endl;
}

int check(int a[], int n){
    for (int i = 1; i < n; i++){
        if (a[i] == 1 && a[i+1] ==1){
            return 0;
        }
    }
    return 1;
}

void Try(int i){
    for (int j = 0; j <= 1; j++){
        a[i] = j;
        if ((i == n)){
            if ((a[1] == 1) && (a[n] == 0) && check(a, n))
                inkq();}
        else 
                Try(i + 1);
    }
}

int main(){
    int t; cin >> t; 
    while(t--){
        cin >> n;
        Try(1);
    }
    return 0;
}