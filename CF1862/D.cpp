#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(){
	long long n; cin >> n;
	long long left = 0, right = 2e9;
	long long res = 2;

	while(left <= right){
		long long mid = left + (right - left) / 2;
		long long t = mid * (mid - 1) / 2;

		if(t == n){
			cout << mid << "\n";
			return;
		}
		else if(t > n){
			right = mid - 1;
		}else{
			res = mid;
			left = mid + 1;
		}
	}

	long long cur = res * (res - 1) / 2;

	cout << (res + (n - cur)) << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc; cin >> tc;
	for(; tc; tc--) solve();

	return 0;
}
