#include<iostream>
#include<cstdio>
#include<fstream>
#include<cstdlib>

#include<vector>
#include<map>
#include<set>
#include<string>
#include<queue>
#include<deque>
#include<stack>

#include<cmath>
#include<algorithm>




#define ll long long
#define pb push_back
#define f first
#define s second
#define all(c) c.begin(),c.end()
#define len(s) s.size()
#define inf32 (int)10E8*2
#define inf64 (long long)10E17*9
#define inf86 (double)10E14*9

using namespace std;

	ll n,k,base=1000000000;
	vector<ll> a[1000];
	

	vector<ll> sum(vector<ll> x,vector<ll> b)
	{
		ll carry = 0;
		for (int i=0; i<max(x.size(),b.size()) || carry; i++) 
		{
			if (i==x.size())
				x.pb(0);
			x[i] += carry + (i < b.size() ? b[i] : 0);
			carry = x[i] >= base;
			if (carry)  x[i] -= base;
		}
		return x;
	}

int main()
{
	freopen("INPUT.txt","r",stdin);
	freopen("OUTPUT.txt","w",stdout);
	cin>>k>>n;
	a[0].pb(1);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k && i-j>=0;j++)
		{                
			a[i]=sum(a[i],a[i-j]);
		}
	}
	printf ("%d", a[n].empty() ? 0 : a[n].back());
	for (int i=(int)a[n].size()-2; i>=0; --i)
		printf ("%09d", a[n][i]);
	return 0;
}


