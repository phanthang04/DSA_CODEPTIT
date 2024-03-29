#include <iostream>
#include <iomanip>
#define MAX 100

using namespace std;

int X[MAX], n , k, dem = 0;
bool OK = true;
void Init(void){
	cin >> n >> k;
	for (int i = 1;i <= k; i++){
		X[i] = i;
	}
}
void Result(void){
	for (int i = 1; i <= k; i++)
		cout << X[i];
	cout << " ";
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
	else OK = false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		Init();
		while(OK){
			Result();
			Next_Combination();
		}
		cout << endl;
		OK = true;
	}
}
