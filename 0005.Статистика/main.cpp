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
	int n, a[102], k, d1=0, d2=0;
	cin>>n;
	for(i , 0, n)
	{
		cin>>k;
		if(k%2==0)
		{
			d1++;
			a[d1]=k;
		}
		else
		{
			d2++;
			cout<<k<<' ';
		}
	}
	cout<<endl;
	for(i,1,d1+1)
		cout<<a[i]<<' ';
	cout<<endl;
	if(d1>=d2)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
