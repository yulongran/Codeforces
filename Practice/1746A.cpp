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
	int n, k;
	cin >> n >> k;
	
	vector<int> arr(n);
	bool hasOne = false;

	for(int i=0; i<n; i++){
		cin >> arr[i];
		if(arr[i] == 1){
			hasOne = true;
		}
	}

	bool res = hasOne && n >= k;

	if(res) cout <<"YES" << endl;
	else cout << "NO" << endl;
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
