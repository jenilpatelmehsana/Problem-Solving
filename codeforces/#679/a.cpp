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

void solve() {
	// T.C --> O(N) S.C --> O(N)
	int n;
	cin >> n;
	vr<int> arr(n);
	read(arr);
	vr<int> ans(n);
	int low = 0;
	int high = n - 1;
	while (low <= high)
	{
		ans[low] = -arr[high];
		ans[high--] = arr[low++];
	}
	for (int x : ans)
	{
		cout << x << " ";
	}
	cout << endl;
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
	cin >> t;
	while (t--)
	{
		solve();
	}
	return  0;
}
