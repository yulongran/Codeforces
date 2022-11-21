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
	int n = 0, q = 0;
	cin >> n >> q;
	
	vector<int> A(n);
	for(int i=0; i<n; i++) cin >> A[i];
	vector<pair<int,int>> B(q);
	for(int i=0; i<q; i++) {
		int a, b;
		cin >> a >> b;
		 B[i] = make_pair(a, b);
	}
	
	int even_cnt = 0, odd_cnt = 0;
	long long sum = 0;

	for(auto& n: A){
		if(n % 2){
			odd_cnt++;
		}else{
			even_cnt++;
		}
		sum += n;
	}
	
	for(auto& b: B){
		auto [t, v] = b;
		if(t == 0){
			sum += even_cnt * v;

			if(v % 2 == 1){
				odd_cnt += even_cnt;
				even_cnt = 0;
			}
		}else{
			sum += odd_cnt * v;

			if(v % 2 == 1){
				even_cnt += odd_cnt;
				odd_cnt = 0;
			}
		}
		cout << sum << "\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tc;
	cin >> tc;
	
	while(tc--){
		solve();
	}

	return 0;
}
