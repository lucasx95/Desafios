#include <bits/stdc++.h>
using namespace std;

typedef struct {
	bool visited = false;
	set<int> depends;
} document;

int main(){
	int t,n,m,a,b;
	cin >> t;
	
	for(int i = 0; i < t; i++){
		cin >> n >> m;
		vector<document> documents (n);
		vector<int> nextVisit;
		
		for(int j = 0; j < m; j ++){
			cin >> a >> b;
			documents[a].depends.insert(b);
		}
		
		bool flag = true;
		for(int j = 0; j < n && flag; j++){
			nextVisit.clear();
			nextVisit.add(j);
			if(!documents[j].visited && flag){
				while(nextVisit.size() && flag){
					for(int k = 0; k < n && flag; k++){
					}
				}
			}
		}
		
		if(flag) cout << "NAO" << endl;
		else cout << "SIM" << endl;
	}
	
	return 0;
}
