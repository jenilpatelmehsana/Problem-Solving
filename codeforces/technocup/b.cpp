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
	int n; 
	cin>>n;
	int i = n;
	while(i)
	{
		int d = i % 10;
		if(d != 0)
		{
			if(n % d == 0)
			{
				//do nothing
				i /= 10;
			}
			else
			{
				n++;
				i = n;
			}
		}
		else
		{
			i /= 10;
		}
	}
	cout<<n<<endl;
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
