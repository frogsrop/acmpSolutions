#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<fstream>

#include<vector>
#include<set>
#include<map>
#include<stack>
#include<deque>
#include<queue>
#include<string>

#include<algorithm>
#include<cmath>


#define ll long long
#define pb push_back
#define f first
#define s second
#define all(s) s.begin(),s.end()
#define len(s) s.size()






using namespace std;








int main()
{
    freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);	
	ll n,m,i,a[110];
	cin>>m>>n;
	for(i=1;i<m;i++)
		a[i]=1;
	a[m]=2;
	i=m+1;
	for(;i<=n;i++)
	{
	           a[i]=a[i-1]+a[i-m];
	}     
	cout<<a[n];
}
           
            
