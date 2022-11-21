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
	int a, b, c;
	cin >> a >> b >> c;

	if(a + b == c || a + c == b || b + c == a){
		cout << "YES" << endl;
	}else{
		cout << "No" << endl;
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
