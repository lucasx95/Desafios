#include <bits/stdc++.h>
using namespace std;
typedef struct {
	string name,color, size;
} camiseta;

bool compare (camiseta  a, camiseta  b)
{
	int test = b.color.compare(a.color);
	if (test != 0){
		return a.color < b.color;
	}else{
		test = a.size.compare(b.size);
		if(test != 0) return b.size < a.size;
		else return a.name < b.name;
	} 
}
int main(){
	int n;
	string rdName, rdColor, rdSize;
	vector<camiseta> camisetas;
	camiseta rdCamiseta;
	cin >> n;
	while(n){
		for(int i = 0; i < n; i++){
			cin.ignore();
			
			getline(cin, rdName);
			
			cin >> rdColor >> rdSize;
			
			rdCamiseta.name = rdName;
			rdCamiseta.color = rdColor;
			rdCamiseta.size = rdSize;
			camisetas.push_back(rdCamiseta);
		}
		sort(camisetas.begin(),camisetas.end(),compare); 
		
		for(int i = 0; i < n; i++){
			cout << camisetas.at(i).color << " " << camisetas.at(i).size << " " << camisetas.at(i).name << endl;
		}
		cin >> n;
		if(n) cout << endl;
		camisetas.clear();
	}												
	return 0;
}
