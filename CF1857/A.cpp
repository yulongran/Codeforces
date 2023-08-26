#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(){
	int n; cin >> n;
	int odd = 0, even = 0;

	for(int i=0; i<n; i++){
		int num; cin >> num;
		odd += num % 2;
		even += num % 2 == 0;
	}

	if(odd % 2 == 0){
		cout << "YES\n";
		return;
	}
	
	cout << "NO\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc; cin >> tc;
	for(; tc; tc--) solve();

	return 0;
}
