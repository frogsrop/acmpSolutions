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
	int a;
	cin>>a;
	if (a%10==a/1000 && a/10%10==a/100%10) 
		cout<<"YES"; 
	else 
		cout<<"NO";
        return 0;
}
