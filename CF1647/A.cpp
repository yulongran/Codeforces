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
	int n; cin >>n;

	string res = "";
	
	if(n == 1) res = "1";
	else if(n == 2) res = "2";
	else{
		bool even = n % 2 == 1;
		while(n > 0){
			if(even) res += "2";
			else res += "1";
			n -= even ? 2 : 1;
			//even = !even;
		}
	}

	cout << res << endl;
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
