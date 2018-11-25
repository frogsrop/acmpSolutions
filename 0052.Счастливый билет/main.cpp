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
	int n;
	cin>>n;
	if((n%10+(n/10)%10+(n/100)%10)==(n/100000+(n/10000)%10+(n/1000)%10))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
