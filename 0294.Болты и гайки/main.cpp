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
	db a,b,c,d,e,f,k,l,n;
	cin>>a>>b>>c>>d>>e>>f;
	k=a*b/100;
	l=d*e/100;
	if ((a-k)>(d-l))
		n=((a-k)-(d-l))*c;
	else
		if ((a-k)<(d-l))
			n=((d-l)-(a-k))*f;
		else
			n=0;
        cout<<k*c+l*f+n;
        return 0;	
}                    




