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

/*template<class T> void swap(T &a, T &b)
{
	T x = a;
	a = b;
	b = x;
}*/

template<class T> void merge(vr<T> &arr, int init, int mid, int end)
{
	int a = init, b = mid + 1;
	while(a <= mid && b < end)
	{
		if(arr[a] > arr[b])
		{
			swap(arr[a],arr[b]);
			a++;
		}
		else
		{
			b++;
		}
	}
}

template<class T> void divide(vr<T> &arr, int init, int mid, int end)
{
	if(init == end)
		return;
	divide(arr, init, init + mid / 2, mid);
	divide(arr, mid + 1, mid + end / 2, end);
	merge(arr, init , mid , end);
}

template<class T> void merge_sort(vr<T> &arr)
{
	divide(arr, 0, arr.size() / 2, arr.size());
}

void solve() {
	vr<int> arr = {1,5,6,7,8,4,3,2};
	merge_sort(arr);
	for(int x : arr)
		cout<<x<<' ';
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
