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
	int n,k=0,l=0,a;
	cin>>n;
	for(i,0,n)
	{
		cin>>a;
		if (!a) 
			k++;
		else
			l++;
	}
	cout<<k<<l;
	return 0;
}
