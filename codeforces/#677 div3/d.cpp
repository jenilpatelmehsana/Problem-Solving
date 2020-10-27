#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vr vector
#define endl "\n"
#define pb push_back
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

// void printMap(const map<int , vr<int>> &m)
// {
// 	for (auto x : m)
// 	{
// 		cout << x.first << "--->";
// 		for (auto y : x.second)
// 		{
// 			cout << y << " ";
// 		}
// 		cout << endl;
// 	}
// }

void solve() {
	int n;
	cin >> n;
	vr<int> arr(n);
	read(arr);
	map<int, vr<int>> m;
	map<int, vr<int>>::iterator mit;
	for (int i = 0; i < n; ++i)
	{
		if (m.find(arr[i]) == m.end())
		{
			vr<int> temp;
			temp.pb(i);
			m[arr[i]] = temp;
		}
		else
		{
			m[arr[i]].pb(i);
		}
	}
	// printMap(m);
	if (m.size() == 1)
	{
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	mit = m.begin();
	int x = (mit -> second)[0] + 1;
	++mit;
	while (mit != m.end())
	{
		for (auto a : (mit -> second))
		{
			cout << x << " " << a + 1 << endl;
		}
		++mit;
	}
	mit = m.begin();
	mit++;
	x = (mit -> second)[0] + 1;
	mit = m.begin();
	for (int i = 1; i < (mit -> second).size() ; ++i)
	{
		cout << x << " " << (mit -> second)[i] + 1 << endl;
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
