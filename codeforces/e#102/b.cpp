#include<bits/stdc++.h>
#define int long long 
#define endl "\n"
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
	string s,t;
	cin>>s>>t;
	int a = s.size(), b = t.size();
	int d, e;
		string f = s, u = t;
	   	while(s.size() != t.size())
		{
			if(s.size() < t.size())
			{
				s += f;
			}
			else
			{
				t += u;
			}
		}
		if(s == t)
		{
			cout<<s<<endl;
		}
		else
		{
			cout<<-1<<endl;
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
