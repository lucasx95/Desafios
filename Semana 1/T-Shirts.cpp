#include <bits/stdc++.h>
using namespace std;
typedef struct {
	string name, color, size;
} camiseta;

int main(){
	int n;

	string rdName, rdColor, rdSize;
	vector<camiseta> camisetas;
	camiseta rdCamiseta;
	cin >> n;
	while(n){
		for(int i = 0; i < n; i++){
			getline(cin, rdName);
			cin >> rdColor >> rdSize;
			rdCamiseta.name = rdName;
			rdCamiseta.color = rdColor;
			rdCamiseta.size = rdSize;
			
			camisetas.push_back(rdCamiseta);
		}
		
		for(int i = 0; i < n; i++){
			cout << camisetas.at(i).color << " " << camisetas.at(i).size << " " << camisetas.at(i).name << endl;
		}
		cout << endl;
		cin >> n;
	}												
	return 0;
}
