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

		int a[202];

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int b,c,k=0;
	string s;
	b=101;
	a[b]=1;
	cin>>s;
	for(i,0,s.size())
	{	
		if ((int(s[i])-48)==1)
			b=b+1;
		if ((int(s[i])-48)==2)
			b=b-1;
		a[b]=1;
	}
	for(i,1,203)
		if (a[i]==1) 
			k++;
	cout<<k;
	return 0;
}
