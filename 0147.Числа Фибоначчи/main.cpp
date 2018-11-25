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
	int n,i=1,k1,k2;
	cin>>n;
	k1=0;
	k2=1;
	if (n==0)
		cout<<k1;
       	else
		if(n==1)
			cout<<k2;
		else
		{
			while(i<n)
			{
				swap(k1,k2);
				k2=k1+k2;
				i++;		
			}
			cout<<k2;
		}
	return 0;
}
