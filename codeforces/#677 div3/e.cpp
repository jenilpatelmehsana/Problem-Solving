#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vr vector
#define endl "\n"
#define all(x) x.begin(),x.end()
const int mod = 1e9 + 5;

template<class T> void read(vr<T> &arr)
{
	for (auto &x : arr)
		cin >> x;
}

template<class T> void read(T &x)
{
	cin >> x;
}

template<class T> void write(vr<T> &arr)
{
	for (auto x : arr)
		cout << x << " ";
	cout << endl;
}

template<class T> void write(vr<vr<T>> &arr)
{
	for (auto &x : arr)
	{
		for (auto &y : x)
			cout << y << " ";
		cout << endl;
	}
}

template<class T> void write(T &x)
{
	cout << x;
}

int fact(int n) {
	if (n == 0) return 1;
	if (n > 0) return n * fact(n - 1);
}

int NCR(int n, int k) {
	if (k > n) return 0;
	if (k * 2 > n) k = n - k;
	if (k == 0) return 1;

	int result = n;
	for ( int i = 2; i <= k; ++i ) {
		result *= (n - i + 1);
		result /= i;
	}
	return result;
}

void solve() {
	int n;
	cin >> n;
	int x = NCR(n , n / 2) / 2;
	int y =  fact((n / 2) - 1) *  fact((n / 2) - 1);
	// cout << x << " & " << y;
	cout << x*y;
}
int32_t main() {

	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t = 1;
	// cin >> t;
	while (t--)
	{
		solve();
	}
	return  0;
}
