#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(){
	string s; cin >> s;
	
	int n = s.size();

	vector<int> A(s.size() + 1), B(n + 1);

	for(int i=0; i<n; i++) {
		A[i + 1] = s[i] - '0';
		B[i + 1] = s[i] - '0';
	}

	reverse(A.begin(), A.end());

	for(int i=0; i<n; i++){
		if(A[i] < 5) continue;

		A[i] = 0;
		i += 1;

		while(i < n && A[i] == 9){
			A[i] = 0;
			i += 1;
		}

		A[i] += 1;
		i -= 1;
	}

	reverse(A.begin(), A.end());
	
	int zero = n + 1;

	for(int i=0; i<n+1; i++){
		if(A[i] > B[i]){
			zero = i + 1;
			break;
		}
	}

	for(int i=zero; i<n+1; i++){
		A[i] = 0;
	}

	for(int i=0; i<A.size(); i++){
		if(i == 0&& A[i] == 0) continue;
		cout << A[i];
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
