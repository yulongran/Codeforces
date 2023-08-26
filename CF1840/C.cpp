#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(){
	int n, k, q; cin >> n >> k >> q;

	vector<int> A(n, 0);

	long long res = 0, len = 0;

	for(int i=0; i<n; i++) cin >> A[i];

	for(int i=0; i<n; i++){
		if(A[i] <= q){
			len += 1;
		}else{
			if(len >= k){
				res += (len - k + 1) * (len - k + 2) / 2;
			}

			len = 0;
		}
	}

	if(len >= k) res += (len - k + 1) * (len - k + 2) / 2;

	cout << res << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc; cin >> tc;
	for(; tc; tc--) solve();

	return 0;
}
