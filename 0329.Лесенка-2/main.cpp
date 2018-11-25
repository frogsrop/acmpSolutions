#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<fstream>

#include<vector>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<deque>

#include<algorithm>
#include<cmath>


#define ll long long
#define pb push_back
#define f first
#define s second
#define all(c) c.begin(),c.end()
#define len(s) s.size()



using namespace std;




        ll n,a[1005],b[1005];
        vector<ll> v;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	b[1]=a[1];
	b[2]=a[2]+(a[1]>0?a[1]:0);
	for(int i=3;i<=n;i++)
	{
		b[i]=max(b[i-1],b[i-2])+a[i];
	}
	cout<<b[n]<<endl;
	int i=n;
	v.pb(i);
	while(i>=1)
	{
		if (b[i]-a[i]==b[i-2])
		{
			v.pb(i-2);
			i-=2;
				
		}
		else
		{
			v.pb(i-1);
			i-=1;	
		}
	}
	for(i=len(v)-2;i>=0;i--)
	{                      
		cout<<v[i]<<' ';
	}
	return 0;
}