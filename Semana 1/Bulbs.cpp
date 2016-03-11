#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,aux,bulb;
	cin >> n >> m;
	
	vector<bool> bulbs(m);
	for(int i = 0; i < m; i++){
		bulbs[i] = false;
	}
	
	for(int i = 0; i < n; i++){
		cin >> aux;
		for(int j = 0; j < aux ; j++){
			cin >> bulb;
			bulbs[bulb-1] = true;
		}
		//cout << "Bulb[" << n-1 << "] setado." << endl;
	}
	
	bool isPossible = true;
	for(int i = 0; i < m; i++){
		if(!bulbs[i]) isPossible = false;
	}
	
	if(isPossible){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}
