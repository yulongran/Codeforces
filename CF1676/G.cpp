#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>
#include <cmath>
#include <iomanip>
#include <climits>
#include <bitset>

using namespace std;

pair<int,int> dfs(unordered_map<int,vector<int>>& graph, vector<int>& color, int& res, int u){
	if(!u){
		return {0, 0};
	}
	
	int w = 0, b = 0;
	w += !color[u];
	b += color[u];
	
	for(auto& v: graph[u]){
		auto [white, black] = dfs(graph, color, res, v);

		w += white;;
		b += black;
	}
	
	res += (w == b);


	return {w, b};
};

void solve(){
	int n; cin >>n;
	
	unordered_map<int,vector<int>> graph;
	vector<int> color(n + 1);
	int res = 0;
	
	for(int i=2; i<=n; i++){
		int parent; cin >> parent;
	
		graph[parent].push_back(i);
	}
	
	string s; cin >> s;

	for(int i=0; i<n; i++){
		color[i + 1] = s[i] == 'B';
	}


	dfs(graph, color, res, 1);

	cout << res << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc; cin >> tc;
	for(; tc; tc--) solve();

	return 0;
}
