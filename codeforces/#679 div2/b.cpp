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
	int n , m;
	cin >> n >> m;
	vr<vr<int>> a(n , vr<int> (m )), b(m , vr<int> (n));
	for (auto &x : a)
		read(x);
	for (auto &x : b)
		read(x);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[j][0] == b[0][i])
			{
				for (int k = 0; k < m; ++k)
				{
					cout << a[j][k] << " ";
				}
				cout << endl;
				break;
			}
		}
	}
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
