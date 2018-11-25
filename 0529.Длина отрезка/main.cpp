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
	double x2,y2,x1,y1,ans;
	cin>>x1>>y1>>x2>>y2;
	ans=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("%.8lf",ans);
}
