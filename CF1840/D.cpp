#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(){
	int n; cin >> n;

	vector<int> A(n);

	for(int i=0; i<n; i++) cin >> A[i];

	int res = INT_MAX;

	cout << res << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc; cin >> tc;
	for(; tc; tc--) solve();

	return 0;
}
