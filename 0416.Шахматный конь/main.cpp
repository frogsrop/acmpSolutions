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

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,i=1;
	char c;
	int x;
	cin>>c>>n;
	char a[10];
	a[1]='a';
	a[2]='b';
	a[3]='c';
	a[4]='d';
	a[5]='e';
	a[6]='f';
	a[7]='g';
	a[8]='h';
	for(;a[i]!=c;i++){}
	if (n-2>0)
	{
		if (i+1<9) 
			cout<<a[i+1]<<n-2<<endl;
		if (i-1>0) 
			cout<<a[i-1]<<n-2<<endl;
	}
	if (n-1>0)
	{
		if (i-2>0) 
			cout<<a[i-2]<<n-1<<endl;
		if (i+2<9) 
			cout<<a[i+2]<<n-1<<endl;
	}
	if (n+1<9)
	{	
		if (i-2>0) 
			cout<<a[i-2]<<n+1<<endl;
		if (i+2<9) 
			cout<<a[i+2]<<n+1<<endl;
	}
	if (n+2<9)
	{	
		if (i+1<9) 
			cout<<a[i+1]<<n+2<<endl;
		if (i-1>0) 
			cout<<a[i-1]<<n+2<<endl;
	}
	return 0;				
}
