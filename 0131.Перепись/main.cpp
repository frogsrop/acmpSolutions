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
	int n,a,b,m=-1,r=-1;
	cin>>n;
	for(i,1,n+1)
	{
		cin>>a>>b;
		if ((b==1)&&(a>m))
		{
			r=i;
		        m=a;
		}	
	}
	cout<<r;
	return 0;
}
