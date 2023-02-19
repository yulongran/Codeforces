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
	int n, k; cin >> n >> k;
	
	int A[n];
	map<int, int> map;

	for(int i=0; i<n; i++){
		cin >> A[i];
		map[A[i]]++;
	}

	int res = -1;
	
	vector<int> B;
	
	for(auto& entry: map){
		if(entry.second >= k) B.push_back(entry.first);
	}
	
	if(B.size() == 0){
		cout << -1 << "\n";
		return;
	}
	
	sort(B.begin(), B.end());

	int left = B[0], right = B[0], mx = 0, l = left;

	for(int i=1; i<B.size(); i++){
		if(B[i] == B[i - 1] + 1){
			if(B[i] - l > mx){
				left = l;
				right = B[i];
				mx = B[i] - l;
			}
		}else{
			l = B[i];
		}
	}
	
	
	cout << left << " " << right << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tc;
	cin >> tc;
	
	for(; tc; tc--) solve();

	return 0;
}
