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

void solve(){
	int n; cin >> n;
	vector<int> A(n);
	for(int i=0; i<n; i++) cin >> A[i];
	string s; cin >> s;
	
	unordered_set<char> used;
	unordered_map<int, char> umap;
	string res;
	
	for(int i=0; i<n; i++){
		if(umap.find(A[i]) != umap.end()){
			res.push_back(umap[A[i]]);
		}else{
			umap[A[i]] = s[i];
			res.push_back(s[i]);
		}
	}

	cout << (res == s ? "YES" : "NO") << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tc;
	cin >> tc;
	
	while(tc--){
		solve();
	}

	return 0;
}
