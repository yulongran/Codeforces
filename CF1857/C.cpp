#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(){
	int n; cin >> n;
	int m = n * (n - 1) / 2;

	vector<int> B(m);

	for(int i=0; i<m; i++) cin >> B[i];
	
	sort(B.begin(), B.end());

	int i = 0;

	for(int t=1; t<=n-1; t++){
		cout << B[i] << " ";
		i += n - t;
	}

	cout << 1000000000 << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc; cin >> tc;
	for(; tc; tc--) solve();

	return 0;
}
