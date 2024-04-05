#include<iostream>
#include <set>
using namespace std;


int main(){
	int t;	cin >> t;
	while(t--){
		int n, l=9999, r = 0 ,count, x;
		cin >> n;
		set<int> s;
		for(int i=0; i<n; i++){
			cin >> x;
			s.insert(x);
			if (x < l)	l = x;
			if (x > r) r= x;
		}
		count = (r-l)+1;
		count -= s.size();
		cout << count << endl;
	}
	return 0;
}