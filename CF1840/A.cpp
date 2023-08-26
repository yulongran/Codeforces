#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(){
	int n; cin >> n;
	string s; cin >> s;

	int i = 0;

	while(i < n){
		int j = i + 1;

		while(j < n && s[j] != s[i]) j += 1;
	
		cout << s[i];

		i = j + 1;
	}

	cout << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc; cin >> tc;
	for(; tc; tc--) solve();

	return 0;
}
