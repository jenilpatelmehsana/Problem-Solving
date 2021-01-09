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
	int i;
	cin>>i;
	if(i == 1)
	{
		cout<<9<<endl;
		return;
	}
	if(i == 2)
	{
		cout<<98<<endl;
		return;
	}
	if(i == 3)
	{
		cout<<989<<endl;
		return;
	}
	cout<<989;
	i -= 3;
	int n = 0;
	while(i--)
	{
		if(n == 10)
			n = 0;
		cout<<n++;
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
