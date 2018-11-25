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
	int n,a[100003],neg=0,pos=0,ln=0,lp=0;
	cin>>n;
	for(i,1,n+1)
	{	
		cin>>a[i];
		if (a[i]<0)
		{ 
			neg=neg-a[i];
			ln++;
		}
		else    
		{
			pos=pos+a[i];
			lp++;
		}
	}
	
	
	if (neg==0 &&pos==0) 
		cout<<0;
	else
		if (abs(neg)>pos)
		{
			cout<<ln<<endl;
			for(i,1,n+1)
				if (a[i]<0) 
					cout<<i<<' ';	
		}
		else
		{
			cout<<lp<<endl;
			for(i,1,n+1)
				if (a[i]>=0) 
					cout<<i<<' ';
		}		 
	return 0;
}
