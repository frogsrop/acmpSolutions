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
	int a;
	cin>>a;
	if (a==1) 
		cout<<0;
	else
		if (a%2==0) 
			cout<<a/2;
		else
			cout<<a;
	return 0;
}
