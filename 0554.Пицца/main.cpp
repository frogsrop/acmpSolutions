#include<iostream>
#include<fstream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<cstring>

#define fors(i, n, m) for(int i=n; i<m; i++)
#define db double
#define s second
#define f first
#define pb push_back

using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,ans=2;
	cin>>n;
	n=n+1;
	for(int i=2;i<n;i++)
	{
		ans=ans+i;
	}
	cout<<ans;
	return 0;
}