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
	
	pair<pair<int,int>,int> a[102];
	
	int n;
	cin>>n;
	for(i,0,n)
	{
		cin>>a[i].f.f>>a[i].f.s>>a[i].s;
	}
	sort(a,a+n);
	for(i,0,n)
	{
		cout<<a[i].f.f<<' '<<a[i].f.s<<' '<<a[i].s<<endl;
	}                                 	
	return 0;
}
