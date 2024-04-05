#include<iostream>
#include <set>
using namespace std;


int main(){
	int t;	cin >> t;
	while(t--){
		int n, k, count = 0, x;
		cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> x;
			if (x == k)	count++;
		}
		if(count == 0)	cout << "-1\n";
		else
			cout << count << endl;
	}
}