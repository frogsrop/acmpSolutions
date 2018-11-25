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

		void rec(int a)
		{
			if (a>0) 
			{
				int k ;
				cin>>k;
			        rec(a-1);
			        cout<<k<<" ";
			}
		}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	cin>>n;
	rec(n);
	return 0;
}
