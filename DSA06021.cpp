#include <iostream>

using namespace std;

int n, k;
int binsearch(int a[], int l, int r){
    if (l == r){
        if (a[l] == k)  return l;
        return -1;
    }
    int mid = (l + r)/2;
    if (a[mid] < k)     return binsearch(a, mid+1, r);
    return binsearch(a, l+1, mid);
}

int main(){
    int t;  cin >> t;
    while(t--){  
        cin >> n >> k;
        int a[n+1]= {0};
        for(int i = 1; i <= n; i++){ 
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++){ 
            if (a[i] == k){  
                cout << i << endl;
                break;
            }
        }
    }
}