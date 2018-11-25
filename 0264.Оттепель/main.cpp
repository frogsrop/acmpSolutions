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
	int k=0,l=0,n,c;
	cin>>n;
	for(i,0,n)
	{
		cin>>c;
		if (c>0)
			k++; 
		else
			k=0;
		if (l<k) 
			l=k;
	}
	cout<<l;
	return 0;
}       
