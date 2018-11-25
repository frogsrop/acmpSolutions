#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>

#define for(i, n, m) for(int i=n; i<m; i++)
#define db double
#define s second
#define f first
#define pb push_back

using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,b,minn=30005,maxx=-1;
	cin>>a;
	for(i,1,a+1)
	{	
		cin>>b;
		maxx=max(maxx,b);
		minn=min(minn,b); 
	}
	cout<<minn<<' '<<maxx;
	return 0;
}
