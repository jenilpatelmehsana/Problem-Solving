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
	int n,k;
	cin>>n>>k;
	vr<int> arr(n);
	read(arr);
	sort(arr.begin(),arr.end(),greater<int>());
	int a = 0, b = 0;
	if(n >= 1)
		a = arr[0];
	if(n >= 2)
		b = arr[1];
	int total = 0;
	int i = 2;
	while(true)
	{
		if(a >= k && b >= k)
		{
			break;
		}
		if(i >= n)
		{
			cout<<-1<<endl;
			return;
		}
		if(a < b)
		{
			a += arr[i++];
		}
		else
		{
			b += arr[i++];
		}
	}
	if(a >= k && b >= k)
	{
		cout<<i<<endl;
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
