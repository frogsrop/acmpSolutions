#include<iostream>
#include<cstdio>
#include<fstream>
#include<cstdlib>

#include<vector>
#include<map>
#include<set>
#include<cstring>
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
#define inf32 (int)10E8*2
#define inf64 (long long)10E17*9
#define inf86 (double)10E14*9

using namespace std;

        int n,mx,ans;
        bool t[1000000004];
        
        void change(int v,int l,int r,int tl,int tr)
        {
        	if(l>r)
        	{
        		return;
        	}
        	if(l==tl && r==tr)
        	{
        		t[v]=1;
        	}
        	else
        	{
        		int tm=(tl+tr)/2;                               
        		change(v*2,l,min(r,tm),tl,tm);
        		change(v*2+1,max(l,tm+1),r,tm+1,tr);
        		t[v]=min(t[v*2],t[v*2+1]);
        	}
        }

        bool get(int v,int l,int r,int tl,int tr)
        {
        	if(l>r)
        	{
        		return 0;
        	}
        	if(l==tl && r==tr)
        	{
        		return t[v]; 
        	}
        	else
        	{
        		int tm=(tl+tr)/2;
        		return min(get(v,l,min(tm,r),tl,tm),get(v,max(l,tm+1),r,tm+1,tr));
        	}
        }

int main()
{
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		mx=max(max(mx,a),b);
		change(1,a,b,0,100000000);
	}
	for(int i=1;i<=mx-ans+1;i++)
	{
		int j=i+1;
		while(get(1,i,j,0,100000000))j++;
		ans=max(j-i-1,ans);
		i=j;	
	}
	cout<<get(1,1,3,0,100000000);
	cout<<ans;
	return 0;
}


