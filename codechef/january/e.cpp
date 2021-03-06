#include<bits/stdc++.h>
#define int long long 
#define vr vector
#define all(x) (x.begin(), x.end())
#define FOR(i,x,y) for(int i = x; i < y; ++i)
#define endl "\n"
using namespace std;
const int INF = 1e9+5;

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
	sort(arr.begin(), arr.end());
	vr<vr<int>> dp(n + 1, vr<int>(k + 1, INF));
	dp[n][0] = 0;
	for(int i = n - 1; i > -1; --i)
	{
		for(int j = k; j > 0; --j)
		{
			if(arr[i] >= j)
			{
				dp[i][j] = arr[i];
			}
			else
			{
				dp[i][j] = min(dp[i+1][j], dp[i + 1][j - arr[i]] + arr[i]);
			}
		}
	}
	vr<int> suff(n);
	suff[n-1] = arr[n - 1];
	for(int i = n - 2; i > -1; --i)
	{
		suff[i] = suff[i + 1] + arr[i];
	}
	bool flag = false;
	for(int i = n - 1; i > - 1; --i)
	{
		if(suff[i] - dp[i][k] >= k)
		{
			cout<<n - i<<endl;
			flag = 1;
			break;
		}
	}
	if(!flag)
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
