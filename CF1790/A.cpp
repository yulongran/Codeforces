#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(){
	string p = "3141592653589793238462643383279";
	string s; cin >> s;
	
	for(int i=0; i<30; i++){
		if(s[i] != p[i]){
			cout << i << "\n";
			return;
		}
	}

	cout << 30 << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc; cin >> tc;
	for(; tc; tc--) solve();

	return 0;
}
