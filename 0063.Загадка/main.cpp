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
	int n, m, a=0, b=0;
	cin>>n>>m;
	while(((a+b)!=n)||((a*b)!=m))
	{
		a++;
		b=n-a;
	}
	cout<<a<<' '<<b;
	return 0;
}
