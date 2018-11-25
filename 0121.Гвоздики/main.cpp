#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstdlib>

#include<vector>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<stack>
#include<string>

#include<cmath>
#include<algorithm>



#define ll long long
#define	pb push_back
#define f first
#define s second
#define all(c) c.begin(),c.end()
#define len(s) s.size()



using namespace std;




        int n,m,a[105],b[105];


int main()
{
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        cin>>n;
        for(int i=1;i<=n;i++)
        {
        	cin>>b[i];
        }
        sort(b+1,b+n+1);
        a[0]=0;
        a[1]=3000;
        for(int i=2;i<=n;i++)
        {
        	a[i]=min(a[i-1],a[i-2])+(b[i]-b[i-1]);
        }
        cout<<a[n];
        /*for(int i=1;i<=n;i++)
        {
        	cout<<a[i]<<' ';
        }       */
        return 0;
}
