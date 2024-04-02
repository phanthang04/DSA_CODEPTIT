#include <iostream>
#include <iomanip>
#define MAX 100

using namespace std;

int X[MAX], n , k, a[MAX];
void Init(void){
	cin >> n >> k;
	for (int i = 1;i <= k; i++){
		cin >> X[i];
        a[i] = X[i];
	}
}
int binsearch(int n, int l, int r){
    int mid = (l+r)/2;
    if (a[mid] == n){
        return 1;
    }
    if (l == r) {
        return 0;
    }
    if (a[mid] < n) 
        return binsearch(n, mid+1, r);
    else
        return binsearch(n, l, mid-1);
}
void Next_Combination(void){
	int i = k;
	while(i > 0 && X[i] == n-k+i){
		i--;
	}
	if (i>0){
		X[i] = X[i] + 1;
		for (int j = i+ 1; j <= k; j++){
			X[j] = X[i] + j -i;
		}
	}
	else {
		for (int i = 1;i <= k; i++){
			X[i] = 0;
	}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		Init();
		Next_Combination();
		int count = 0;
        for (int i = 1; i <= k; i++){
            if (binsearch(X[i], 1, k) == 0) count++;
        }
        cout << count << endl;
	}
}
