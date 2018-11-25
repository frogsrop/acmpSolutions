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
	int n,k;
	string a="2.7182818284590452353602875";
	cin>>n;
	if (n==0) 
		cout<<3;
	else
		if ((int(a[n+2])-48==5)||(int(a[n+2])-48==6)||(int(a[n+2])-48==7)||(int(a[n+2])-48==8)||(int(a[n+2])-48==9))
		{
			k=int(a[n+1])-48;
			a.erase(n+1,a.size()-(n+1));
	        	cout<<a<<k+1;
		} 
		else
		{
			a.erase(n+2,a.size()-(n+2));
			cout<<a;
		}
	return 0;
}
