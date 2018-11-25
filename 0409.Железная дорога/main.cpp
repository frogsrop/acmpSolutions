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
	db a[30002],n,c=0,ans;
	cin>>n;
	for(i,1,n+1)
		cin>>a[i];
       	for(i,1,n)
       		c=c+((a[i]+a[i+1])/2);
       	ans=c/(n-1);
       	printf("%.8lf",ans);
       	return 0;
}
