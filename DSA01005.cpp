#include <iostream>
#include <iomanip>
#define MAX 100

using namespace std;

int X[MAX], n;
bool OK = true;
void Init(void){
	cin >> n;
	for (int i = 1;i <= n; i++){
		X[i] = i;
	}
}
void Result(void){
	for (int i = 1; i <= n; i++)
		cout << X[i];
	cout << " ";                                                                                                                        
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
	else
		OK = false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		Init();
		while(OK){
			Result();
			Next_Permutation();	
		}
		cout << endl;
		OK = true;
	}
}
