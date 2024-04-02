#include <iostream>
#include <iomanip>
#define MAX 100

using namespace std;

int X[MAX];

void Next_Bits_String(string s){
	int n = s.length()-1;
	int i = n;
	while(i >= 0 && s[i] == '1'){
		s[i] = '0';
		i--;
	}
	if (i>=0){
		s[i] = '1';
		for (int j = 0; j <= n; j++)
			cout << s[j];
	}
	else{
		for (int j = 0; j <= n; j++)
			cout << "0";
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		Next_Bits_String(s);
		cout << endl;
	}
}
