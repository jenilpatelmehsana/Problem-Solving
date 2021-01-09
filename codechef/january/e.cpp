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
	int n , k;
	cin>>n>>k;
	vector<int> arr(n);
	read(arr);
	arr[n] = 0;
	sort(arr.begin(), arr.end(), greater<int>());
	int a = 0;
	if(n > 0)
		a = arr[0];
	int b = 0;
	if(n > 1)
		b = arr[1];
	int ans = 2;
	if(n < 3)
	{
		if(a >= k && b >= k)
			cout<<2<<endl;
		else
			cout<<-1<<endl;
		return;
	}
	for(int i = 2; i < n; ++i)
	{
		if(a >= k && b >= k)
			break;
		if(a >= k)
		{
			b += arr[i];
		}
		else
		{
			if(b >= k)
			{
				a += arr[i];
			}
			else
			{
				if(abs(k - arr[i] + a) > abs(k - arr[i] + b))
				{
					a += arr[i];
				}
				else
				{
					b += arr[i];
				}
			}
		}
		ans++;
	}
	if(a >= k && b >= k)
		cout<<ans<<endl;
	else
		cout<<-1<<endl;
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
