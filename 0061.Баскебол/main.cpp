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
	int a,b,k=0,l=0;
	for(i,1,5)
	{
		cin>>a>>b;
	        k=k+a;
	        l=l+b;
	}
	if (k>l) 
		cout<<1;
	else
		if (k<l) 
			cout<<2;
		else
			cout<<"DRAW";
	return 0;
}
