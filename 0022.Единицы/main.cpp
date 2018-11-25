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
	int n, ans=0;
	cin>>n;
	while(n>0)
	{
		if (n%2==1) 
			ans++;
		n/=2;
	}
	cout<<ans;
	return 0;
}
