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
	if (a % 3==0) 
		cout<<"GCV";
	else
		if (a % 3==2)
			cout<<"CVG";
		else
			cout<<"VGC";
	return 0;
}
