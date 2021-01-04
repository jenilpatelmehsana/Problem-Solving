#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vr vector
#define FOR(i,x,y) for(int i = x; i < y; ++i)

template<class T> void read(vr<T> &arr)
{
	for(auto &x : arr)
		cin>>x;
}

template<class T> void read2d(vr<vr<T>> &arr)
{
	for(auto &x : arr)
		for(auto &y : x)
			cin>>y;
}

void solve() {
	int n,k;
	cin>>n>>k;
	vr<int> arr(n);
	int sum = 0;
	for(auto &x : arr)
	{
		cin>>x;
		sum += x;
	}
	if(sum % k == 0)
	{
		cout<<0<<endl;
	}
	else
	{
		cout<<1<<endl;
	}
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1; 
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
