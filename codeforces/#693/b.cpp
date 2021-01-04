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
	int twogm = 0, onegm = 0;
	int x;
	for(int i = 0; i < n; ++i)
	{
		cin>>x;
		if(x & 1)
		{
			onegm++;
		}
		else
		{
			twogm++;
		}
	}
	int a = 0 , b = 0;
	while(twogm)
	{
		if(a < b)
		{
			a += 2;
		}
		else
		{
			b += 2;
		}
		twogm--;
	}
	while(onegm)
	{
		if(a < b)
		{
			a += 1;
		}
		else
		{
			b += 1;
		}
		onegm--;
	}
	if(a == b)
	{
		printYES();
	}
	else
	{
		printNO();
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
