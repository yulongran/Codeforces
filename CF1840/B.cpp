#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(){
	int n, k; cin >> n >> k;
	
	k = min(k, 30);

	cout << min(n, (1 << k) - 1) + 1 << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc; cin >> tc;
	for(; tc; tc--) solve();

	return 0;
}
