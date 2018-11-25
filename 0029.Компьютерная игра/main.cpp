#include<iostream>
#include<cstdio>
#include<fstream>
#include<cstdlib>

#include<vector>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<deque>
#include<string>

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
       int a[30005],b[30005];



int main()
{
 	//freopen("input.txt","r",stdin);
 	//freopen("output.txt","w",stdout);
        cin>>n;
        for(int i=1;i<=n;i++)
        {
        	cin>>a[i];
        }
        b[1]=0;
        b[2]=abs(a[2]-a[1]);
        for(int i=3;i<=n;i++)
        {
        	b[i]=min(3*abs(a[i]-a[i-2])+b[i-2],abs(a[i]-a[i-1])+b[i-1]);	
        }
        cout<<b[n];
	return 0;
}