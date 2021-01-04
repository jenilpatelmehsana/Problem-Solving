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
	vr<int> h(n),w(n);
	for(int i = 0;i < n; ++i)
	{
		cin>>h[i]>>w[i];
	}
	for(int i = 0; i < n; ++i)
	{
		int temp = 0;
		for(int j = 0; j < n; ++j)
		{
			if(i == j)
				continue;
			if((h[j] < h[i] && w[j] < w[i]) || (w[j] < h[i] && h[j] < w[i]))
			{
				temp++;
			}
		}
		if(temp == 0)
			cout<<-1<<' ';
		else
			cout<<temp<<' ';
	}
	cout<<endl;
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
