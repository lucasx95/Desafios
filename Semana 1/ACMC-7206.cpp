#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n,m,budget,card,sumRound,daedelusPoints, daedelusCard, maxPoints;
	vector<int> cards;
	cards.push_back(10000);
	cards.push_back(1000);
	cards.push_back(100);
	cards.push_back(10);
	cards.push_back(1);
	
	while(cin >> n){
		cin >> m;

		maxPoints = daedelusPoints = 0;
		
		for(int i = 0; i < m; i++){
			cin >> budget;
			//cout << "B: " << budget << endl;
			cin >> daedelusCard;
			sumRound = 0;
			for(int j = 0; j < n-1; j++){
				cin >> card;
				sumRound += card;
			}
			if (sumRound + daedelusCard <= budget){
				daedelusPoints += daedelusCard;
			}
			//cout << "DIF: " << budget - sumRound << endl;
			bool flag = true;
			for(unsigned int i = 0; i < cards.size() && flag; i++){
				if(cards[i] + sumRound <= budget){
					maxPoints += cards[i];
					flag = false;
				}
			}
			//cout << "DP: " << daedelusPoints << endl;
			//cout << "MP: " << maxPoints << endl;

		}
		cout << maxPoints - daedelusPoints << endl;
	}
	
	return 0;
}
