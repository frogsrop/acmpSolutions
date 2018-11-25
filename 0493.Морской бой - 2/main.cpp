#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>

#define fors(i, n, m) for(int i=n; i<m; i++)
#define db double
#define s second
#define f first
#define pb push_back

using namespace std;

	int n,m,a[105][105],res=0;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	char s;
	cin>>n>>m;
	for(int y=1;y<=m;y++)
	{	for(int x=1;x<=n;x++)
		{
			cin>>s;
			if (s=='*') 
			{
				a[x][y]=1;
			}
			else
			{
				a[x][y]=0;
			}
			if (y>=2)
			{
				if (a[x][y-2]==0 && a[x][y]==0 && a[x-1][y-1]==0 && a[x+1][y-1]==0 && a[x][y-1]==0)	
				{	
					res++;
				}
			}
		}
	}
	for(int x=1;x<=n;x++)
	{
		if (a[x][m-1]==0 && a[x][m+1]==0 && a[x-1][m]==0 && a[x+1][m]==0 && a[x][m]==0)	
				{	
					res++;
				}
	}
	cout<<res;
	return 0;
}