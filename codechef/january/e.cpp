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
	int sum = 0;
	for(int x : arr)
	{
		sum += x;
	}
	if(sum < 2 * k)
	{
		cout<<-1<<endl;
		return;
	}
	int a = 0, b = 0;
	int i;
	vr<int> apush, bpush;
	for(i = 0; i < n; ++i)
	{
		if(a >= k && b >= k)
		{
			break;
		}
		if(a < b)
		{
			int index = i;
			int diff = INT_MAX;
			for(int j = i; j < n; ++j)
			{
				if(diff > k - arr[j])
				{
					index = j;
					diff = k - arr[j];
				}
			}
			swap(arr[i] , arr[index]);
			a += arr[i];
			apush.push_back(arr[i]);
		}
		else
		{
			int index = i;
			int diff = INT_MAX;
			for(int j = i; j < n; ++j)
			{
				if(diff > k - arr[j])
				{
					index = j;
					diff = k - arr[j];
				}
			}
			swap(arr[i] , arr[index]);
			b += arr[i];
			bpush.push_back(arr[i]);
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
	for(int x : arr)
		cout<<x<<' ';
	cout<<endl;
	for(int x : apush)
		cout<<x<<' ';
	cout<<endl;
	for(int x : bpush)
		cout<<x<<' ';
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
