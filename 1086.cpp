#include <bits/stdc++.h>
using namespace std;
#define int long long

#define M 1000000000
bool marked[M];
vector<int> v;

void sieve(int n){
	for (int i = 4; i <= n; i += 2)
	{
		marked[i] = true;
	}
	
	for (int i = 3; i*i <= n; i += 2)
	{
		if(marked[i] == false){
			for (int j = i*i ; j <= n; j += i+i)
			{
				marked[j] = true;
			}
		}
	}
	for (int i = 2; i <= n; i++)
	{
		if(marked[i] == false){
			v.push_back(i);
		}
	}
}

int32_t main()
{
	sieve(1000000);

	int t; cin>>t;

	while (t--)
	{
		int n; cin>>n;
		
		cout<<v[n-1]<<endl;
	}
	

	return 0;
}