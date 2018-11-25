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
	int n, k, sum=0, max1=0, min1=0;
	vector<int> a;
	cin>>n;
	for(i,0,n)
	{
		cin>>k;
		a.push_back(k);
		sum+=(k>0)?k:0;
		max1=(k>a[max1])?i:max1;
		min1=(k<a[min1])?i:min1;
	}
	n=1;
	for(i, min(min1,max1)+1, max(max1,min1))
		n*=a[i];
	cout<<sum<<' '<<n;
	return 0;
}
               
