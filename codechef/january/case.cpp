#include<bits/stdc++.h>
using namespace std;

int main() {
	srand(time(0));
	ofstream fout;
	fout.open("case.txt");
	int t;
	cin>>t;
	fout<<t<<endl;
	while(t--)
	{
		int n = (int)rand() % (int)4001;
		vector<int> arr(n);
		for(int &x : arr)
			x = (int)rand() % (int)1e5;
		int k = (int)rand() % (int)4001;
		fout<<n<<' '<<k<<endl;
		for(int x  : arr)
			fout<<x<<' ';
		fout<<endl;
	}
	fout.close();
	return 0;
}