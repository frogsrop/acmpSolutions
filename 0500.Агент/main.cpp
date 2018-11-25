#include<iostream>
#include<cstdio>
#include<fstream>
#include<cstdlib>

#include<vector>
#include<map>
#include<set>
#include<string>
#include<queue>
#include<deque>
#include<stack>

#include<cmath>
#include<algorithm>




#define ll long long
#define pb push_back
#define f first
#define s second
#define all(c) c.begin(),c.end()
#define len(s) s.size()




using namespace std;

        int n;
        pair<ll,ll> b[10010];

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>b[i].f>>b[i].s;
	} 
	sort(b+1,b+n+1);
	b[2].f=b[2].s;
	b[3].f=b[2].s+b[3].s;
	for(int i=4;i<=n;i++)
	{
		b[i].f=min(b[i-1].f,b[i-2].f)+b[i].s;
	}
	cout<<b[n].f;
	return 0;
}
