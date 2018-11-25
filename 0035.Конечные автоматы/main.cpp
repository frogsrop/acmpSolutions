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
	int n;
	__int64 m[100000];
	cin>>n;
	for(int i=1;i<=n*2;i++)
		cin>>m[i];
	for(int i=1;i<=n*2;i=i+2)
		cout<<19 * m[i+1] + (m[i] + 239) * (m[i] + 366) / 2<<endl;
	return 0;	
}
