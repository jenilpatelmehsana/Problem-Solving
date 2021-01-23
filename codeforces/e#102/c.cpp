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
	int n , m;
	cin<<n<<m;
	vr<pair<int , int>> arr(m);
	vr<int> wt(m);
	for(int i = 0; i < n; ++i)
	{
		cin>>arr[i].first>>arr[i].second>>wt[i];
	}
	for(int i = 0; i < n; ++i)
	{
		
	}
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
//	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
