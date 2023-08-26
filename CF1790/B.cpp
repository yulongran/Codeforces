#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, s, r; cin >> n >> s >> r;
	
	int mx = s - r;
	int avg = r / (n - 1);
	int extra = r % (n - 1);

	vector<int> res;

	for(int i=0; i<n-1; i++) res.push_back(avg);
	for(int i=0; i<extra; i++) res[i] += 1;
	res.push_back(mx);
	
	for(int i=0; i<res.size() - 1; i++){
		cout << res[i] << " ";
	}

	cout << res.back() << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc; cin >> tc;
	for(; tc; tc--) solve();

	return 0;
}
