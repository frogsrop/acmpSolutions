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
	int n,a[1001],m,l,r;
	cin>>n;
	for(i,1,n+1)
		cin>>a[i];
	cin>>m;
	for(i,1,m+1)
	{
		cin>>l>>r;
		for(j,l,r+1)
			cout<<a[j]<<' ';
	        cout<<endl;
	}
	return 0;
}
