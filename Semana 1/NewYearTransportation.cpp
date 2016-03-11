#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, t, a;
	cin >> n >> t;
	vector<bool> cells(n);
	cells[0] = true;
	for(int i = 0; i < n-1; i++){
		cin >> a;
		if(cells[i]) cells[i+a] = true;
	}
	if(cells[t-1]){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
