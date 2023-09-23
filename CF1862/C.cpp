#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(){
	int n; cin >> n;

	vector<int> A(n);

	for(int i=0; i<n; i++) cin >> A[i];
	
	for(int i=0, j=n; i<n; i++){
		while(j > 0 && A[j - 1] <= i){
			j -= 1;
		}

		if(A[i] != j){
			cout << "NO" << endl;
			return;
		}
	}

	cout << "YES\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc; cin >> tc;
	for(; tc; tc--) solve();

	return 0;
}
