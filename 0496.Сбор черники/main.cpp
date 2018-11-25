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

		int a[1005];

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,maxi=0;
	cin>>n;
	for(i,1,n+1)
		cin>>a[i];
	for(i,2,n)
		maxi=max(a[i-1]+a[i]+a[i+1],maxi);
	if (a[1]+a[n]+a[n-1]>maxi) 
		cout<<a[1]+a[n]+a[n-1];
	else
		if (a[1]+a[2]+a[n]>maxi) 
			cout<<a[1]+a[2]+a[n];
		else
			cout<<maxi;
	return 0;	
}
