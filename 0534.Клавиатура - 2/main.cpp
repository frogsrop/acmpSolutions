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

	pair<int,int> a[102];

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,m,k;
	cin>>n;
	for(i,0,n)
	{	
		cin>>a[i].f;
		a[i].s=0;
	}
	cin>>m;
	for(i,0,m)
	{
		cin>>k;
		a[k-1].s++;
	}	
	for(i,0,n)
		cout<<((a[i].f<a[i].s)?"yes":"no")<<endl;
	return 0;
}
