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
	int n,x;
	cin>>n>>x;
	vr<pair<int,int>> arr(x);
	for(int i = 0; i < x; ++i)
	{
		cin>>arr[i].first>>arr[i].second;
	}
	vr<int> one(n , 0),two(n , 0);
	for(int i = 0; i < n; ++i)
	{
		if(i != 0)
		{
			if(arr.find(make_pair(1,i)) == arr.end())
			{
				one[i] = 1;
			}
			if(arr.find(make_pair(2,i)) == arr.end())
			{
				two[i] = 1;
			}
			one[i] += one[i - 1];
			two[i] += two[i - 1];
		}
		else
		{
			if(arr.find(make_pair(1,i)) == arr.end())
			{
				one[i] = 1;
			}
			if(arr.find(make_pair(2,i)) == arr.end())
			{
				two[i] = 1;
			}
		}
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
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
