#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>
#include <cmath>
#include <iomanip>
#include <climits>
#include <bitset>

using namespace std;

void solve(){
	long long n, c, d; cin >> n >> c >> d;
	int res = -1;
	
	long long sum = 0;

	vector<long long> A(n);

	for(int i=0; i<n; i++) {
		cin >> A[i];
	}

	sort(A.rbegin(), A.rend());

	for(int i=0; i<d && i<n; i++){
		sum += A[i];
	}

	if(sum >= c){
		cout << "Infinity" << "\n";
		return;
	}


	auto isValid = [&](int t){
		t++;
		long long total = 0;
			
		for(int i=0; i<d; i++){
			if((i % t) < n) total += A[i % t];
		}

		return total >= c;
	};

	int left = 0, right = d;

	while(left <= right){
		int mid = left + (right - left) / 2;

		if(isValid(mid)){
			res = mid;
			left = mid + 1;
		}else{
			right = mid - 1;
		}

	}

	if(res == -1){
		cout << "Impossible" << "\n";
		return;
	}

	cout << res << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int tc; cin >> tc;
	for(; tc; tc--) solve();

	return 0;
}
