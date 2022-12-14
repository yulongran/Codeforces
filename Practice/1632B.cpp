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
	int n, k = 0;
	cin >> n;

	while((1 << (k + 1)) <= n - 1) k += 1;

	for(int i= (1<<k) - 1; i>=0; i--){
		cout << i << ' ';
	}

	for(int i=(1<<k); i<n; i++){
		cout << i << ' ';
	}

	cout << '\n';
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
