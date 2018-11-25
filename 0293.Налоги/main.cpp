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
	int n,l;
	db a[210],k,maxi=-1;
	cin>>n;
	for(i,1,2*n+1)
		cin>>a[i];
	for(i,1,n+1)
	{
		k=a[i]*(a[n+i]/100); 
		if (maxi<k) 
		{
			maxi=k;
			l=i;
		}
	}
	cout<<l;
	return 0;
}
