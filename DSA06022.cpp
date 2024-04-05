#include<iostream>
#include <set>
using namespace std;


int main(){
	int t;	cin >> t;
	while(t--){
		int n, m1 = 9999999, m2 = 9999999, x;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> x;
			if (x <= m1){
				m2 = m1;
				m1 = x;
			}
			else{
				if (x <= m2){
					m2 = x;
				}
			}
		}
		if (m1 == m2)
			cout << "-1\n";
		else
			cout << m1 << " " << m2 << endl;
	}
}