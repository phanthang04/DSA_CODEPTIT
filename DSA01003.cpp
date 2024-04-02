#include <iostream>
#include <iomanip>
#define MAX 100

using namespace std;

int X[MAX], n;
bool OK = true;
void Init(void){
	cin >> n;
	for (int i = 1;i <= n; i++){
		cin >> X[i];
	}
}
void Result(void){
	for (int i = 1; i <= n; i++)
		cout << X[i] << " ";
	cout << endl;                                                                                                                        
}
void Next_Permutation(void){
	int i = n-1;
	while(i > 0 && X[i] > X[i+1])	i--;
	if(i > 0){
		int k = n;
		while(X[i] > X[k])	k--;
		int temp = X[i];
		X[i] = X[k];
		X[k] = temp;
		int l = i+1, r = n;
		while(l< r){
			int temp = X[r];
			X[r] = X[l];
			X[l] = temp;
			l++;
			r--;
		}
	}
	else{
		for (int i = 1;i <= n; i++){
			X[i] = i;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		Init();
		Next_Permutation();
		Result();
	}
}
