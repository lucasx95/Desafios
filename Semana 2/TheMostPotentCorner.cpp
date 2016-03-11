#include <bits/stdc++.h>
using namespace std;

bool grayCheck(int x, int y) {
       int z = x^y;
       return ((z&(z-1))==0);
}

int main(){
	int n,m,weight,max;
	vector<int> cube, weights;
	while (cin >> n){
		m = pow(2,n);
		cube.clear();
		weights.clear();
		for(int i = 0; i < m; i++){
			cin >> weight;
			cube.push_back(weight);
		}
		cout << endl;		
		for(int i = 0; i < m; i++){
			weight = 0;
			for(int j = 0; j < m; j++){
				if(grayCheck(i,j)) weight+= cube[j];
			}
			weights.push_back(weight);
			cout << weights[i] << endl;
		}
		cout << endl;
		max = 0;
		for(int i = 0; i < m; i++){
			weight = 0;
			for(int j = 0; j < m; j++){
				if( i != j && grayCheck(i,j)){
					if(weights[i] + weights[j] > max) max = weights[i] + weights[j];
				}
			}
			cout << max << endl;
		}
		
		
	}
	return 0;
}
