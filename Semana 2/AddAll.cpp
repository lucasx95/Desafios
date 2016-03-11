#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, rdr, totalCost;
	vector<int> numbers;
	cin >> n;
	while(n){
		numbers.clear();
		for(int  i = 0; i < n; i++){
			cin >> rdr;
			numbers.push_back(rdr);
		}
		sort(numbers.begin(), numbers.end());
		totalCost = 0;
		while(numbers.size() > 1){
			numbers[0] += numbers[1];
			numbers.erase(numbers.begin() + 1);
			totalCost += numbers[0];
			sort(numbers.begin(), numbers.end());
		}
		
		cout << totalCost << endl;
		cin >> n;
	}
	
}
