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

int a[110];

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,sum=0,l=0,d=0;
	cin>>n;
	for(i,1,n+1)
		cin>>a[i];
       	d=a[1];
       	for(i,2,n+1)
       	{
       		l++;
       		cout<<"d="<<d<<"!l="<<l<<'!'<<a[i]<<endl;
       		if (a[i]<a[i-1])
       			d+=a[i];
       		else
       		{
       			 
       			sum=sum+max(d,a[i]*(l+1));
       			l=-1;
       			d=0;
       		}	
       	}	
       	cout<<sum;
       	return 0;
}
