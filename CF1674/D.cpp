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

void __print(int x) {cout << x;}
void __print(long x) {cout << x;}
void __print(long long x) {cout << x;}
void __print(unsigned x) {cout << x;}
void __print(unsigned long x) {cout << x;}
void __print(unsigned long long x) {cout << x;}
void __print(float x) {cout << x;}
void __print(double x) {cout << x;}
void __print(long double x) {cout << x;}
void __print(char x) {cout << '\'' << x << '\'';}
void __print(const char *x) {cout << '\"' << x << '\"';}
void __print(const string &x) {cout << '\"' << x << '\"';}
void __print(bool x) {cout << (x ? "true" : "false");}
void read(){}
void read(long long& a) {cin >> a;}
void read(long& a){cin >> a;}
void read(int& a){cin >> a;}
void read(double& a){cin >> a;}
void read(float& a){cin >> a;}
void read(char& a) {cin >> a;}
void read(string& s, int n){ for(int i=0; i<n; i++) { char c; cin >> c; s.push_back(c); }}
template<typename x,typename y>void read(pair<x,y>& a){ read(a.first),read(a.second);}
template<typename x>void read(x& a){for(auto  &i : a) read(i);}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cout << '{'; __print(x.first); cout << ','; __print(x.second); cout << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cout << '{'; for (auto &i: x) cout << (f++ ? "," : ""), __print(i); cout << "}";}

void solve(){
	int n; cin >> n;
	vector<int> A(n); read(A);
		
	for(int i=n-2; i>=0; i-=2){
		if(A[i] > A[i + 1]) swap(A[i], A[i + 1]);
	}

	if(is_sorted(A.begin(), A.end())){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
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
