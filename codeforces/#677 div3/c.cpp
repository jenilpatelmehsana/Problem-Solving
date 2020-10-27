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

bool same(const vr<int> &arr)
{
	for (int i = 1; i < arr.size() ; ++i)
		if (arr[i] != arr[0])
			return false;
	return true;
}

void solve() {
	int n;
	cin >> n;
	vr<int> arr(n);
	read(arr);
	if (same(arr))
	{
		cout << "-1" << endl;
		return;
	}
	int ans = 0;
	int m = 0;
	for (int i = 0; i < n ; ++i)
	{
		if (i == 0)
		{
			if (arr[i] > m && arr[i + 1] != arr[i])
			{
				ans = i;
				m = arr[i];
			}
			continue;
		}
		if (i == n - 1)
		{
			if (arr[i] > m && arr[i - 1] != arr[i])
			{
				ans = i;
				m = arr[i];
			}
			continue;
		}
		if (arr[i] > m && (arr[i] != arr[i + 1] || arr[i] != arr[i - 1]))
		{
			ans = i;
			m = arr[i];
		}
	}
	cout << ans + 1 << endl;
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
