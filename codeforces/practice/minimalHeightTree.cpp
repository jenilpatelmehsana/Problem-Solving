#include<bits/stdc++.h>
#include<chrono>
#define int long long 
#define vr vector
#define FOR(i,x,y) for(int i = x; i < y; ++i)
using namespace std;
using namespace std::chrono;

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

const int INF = 1e7  + 5;
int arr[INF];

int fib(int x)
{
	if(arr[x] != -1)
		return arr[x];
	else
		arr[x] = fib(x - 1) + fib(x -2);
	return arr[x];
}

void solve() {
	int n;
	cin>>n;
	fib(n);
	int x;
	if(n % 2)
	{
		x = arr[n/2];
	}
	else
	{
		x = arr[n / 2 + 1];
	}
	while(x > 9)
	{
		x %= 10;
	}
	cout<<x<<endl;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	cin>>t;
	fill(arr, arr + INF, -1);
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 1;
	while(t--)
	{
		solve();
	}
	return 0;
}
