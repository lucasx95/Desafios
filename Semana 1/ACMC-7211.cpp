#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int correct, ans;
		correct = 0;
		for(int i = 0; i < 5; i++){
			cin >> ans;
			if(ans == n) correct++;
		}
		cout << correct << endl;
	}
}
