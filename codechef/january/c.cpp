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
	int n,m;
	cin>>n>>m;
	vr<int> a(n),b(m);
	read(a);
	read(b);
	int n_sum = 0, m_sum = 0;
	sort(a.begin() , a.end());
	sort(b.begin() , b.end(), greater<int>());
	for(int x: a)
		n_sum += x;
	for(int x: b)
		m_sum += x;
	int i = 0;
	int ans = 0;
	while(i < min(n , m))
	{
		if(n_sum > m_sum)
		{
			cout<<ans<<endl;
			return;
		}
		n_sum -= a[i];
		n_sum += b[i];
		m_sum -= b[i];
		m_sum += a[i];
		swap(a[i] , b[i]);
		ans++;
		i++;
	}
	if(n_sum > m_sum)
	{
		cout<<ans<<endl;
		return;
	}
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
