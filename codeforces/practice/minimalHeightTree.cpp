#include<bits/stdc++.h>
#define int long long 
#define vr vector
#define FOR(i,x,y) for(int i = x; i < y; ++i)
using namespace std;

template<class T> void read(vr<T> &arr)
{
	for(auto &x: arr)
		cin>>x;
}

template<class T> void read2d(vr<vr<T>> &arr)
{
	for(auto &x: arr)
	{
		for(auto &y : x)
		{
			cin>>y;
		}
	}
}
void printYes() {
	cout<<"Yes"<<endl;
}
void printNo() {
	cout<<"No"<<endl;
}
void printYES() {
	cout<<"YES"<<endl;
}
void printNO() {
	cout<<"NO"<<endl;
}

void solve() {
	int n;
	cin>>n;
	int x;
	for(int i = 0; i < n; ++i)
	{
		cin>>x;
	}
	int ans = 0;
	if(n == 2)
	{
		cout<<2<<endl;
		return;
	}
	while(pow(2,ans) + 1 < n)
	{
		ans++;
	}
	cout<<ans<<endl;
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
