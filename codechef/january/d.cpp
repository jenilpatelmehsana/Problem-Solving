#include<bits/stdc++.h>
#define int long long 
#define vr vector
#define all(x) (x.begin(), x.end())
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
	int n , k , x, y;
	cin>>n>>k>>x>>y;
	k %= 4;
	if(x == y)
	{
			cout<<n<<' '<<n<<endl;
			return;
	}
	if(x < y)
	{
		if(k == 0)
		{
			cout<<0<<' '<<y - x<<endl;
			return;
		}
		if(k == 1)
		{
			cout<<x + n - y<<' '<<n<<endl;
			return;
		}
		if(k == 2)
		{
			cout<<n<<' '<<x + n - y<<endl;
			return;
		}
		if(k == 3)
		{
			cout<<y - x<<' '<<0<<endl;
			return;
		}
	}
	else
	{
		if(k == 0)
		{
			cout<<x - y<<' '<<0<<endl;
			return;
		}
		if(k == 1)
		{
			cout<<n<<' '<<y + n - x<<endl;
			return;
		}
		if(k == 2)
		{
			cout<<y + n - x<<' '<<n<<endl;
			return;
		}
		if(k == 3)
		{
			cout<<0<<' '<<x - y<<endl;
			return;
		}
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
