#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>

#define for(i, n, m) for(long long i=n; i<m; i++)
#define db double
#define s second
#define f first
#define pb push_back

using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	long long a, b, c, d;
	int k=0;
	cin>>a>>b>>c>>d;
	for(i, -100, 100+1)
	{
		if (a*i*i*i+b*i*i+c*i+d==0)
		{
			cout<<i<<' ';
			k++;
		} 
		if (k==3)
			return 0;
	}
	return 0;
}
