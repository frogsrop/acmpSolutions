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


	int n,mn=1000000009, mx=-1000000009, bl, br,ans; 
	bool t[1000000000];
	pair<int,int> p[15005];
	void add_v(int v,int tl,int tr,int l,int r)
	{
		if(l>r)
		{
			return;
		}
		if(t[v]==1)
		{
			return;
		}
		if(tl>=l && tr<=r)
		{
			t[v]=1;
		}
		else
		{
			int tm=(tl+tr)/2;
			add_v(v*2,tl,tm,l,min(r,tm));
			add_v(v*2+1,tm+1,tr,max(l,tm+1),r);
			t[v]=t[v*2]&&t[v*2+1];
		}
	}
	
	bool chek(int v,int tl,int tr,int l,int r)
	{
		if(l>r)
		{
			return 0;
		}
		else
		if(tl==l && tr==r)
		{
			return t[v];
		}
		else
		if(tl<=l && tr>=r && t[v]==1)
		{
			return t[v];	
		}
		else
		{
			int tm=(tr+tl)/2;
			return ((chek(v*2,tl,tm,l,min(r,tm))&&chek(v*2+1,tm+1,tr,max(l,tm+1),r)));
		}
	}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);                                                            
        cin>>n;
        for(int i=0;i<n;i++)
        {
        	cin>>p[i].f>>p[i].s;
        	mx=max(mx,p[i].s);
        	mn=min(mn,p[i].f);
        }
        for(int i=0;i<n;i++)
        {
        	add_v(1,mn,mx,p[i].f,p[i].s);
        }       
        for(int i=mn;i<mx;i++)
        {
        	//bp
        	if(chek(1,mn,mx,i,i))
        	{
        		bl=i;
        		br=mx+1;
        		while(bl+1<br)
        		{
        			int bm=(bl+br)/2;
        			if(chek(1,mn,mx,i,bm))
        			{
        				bl=bm;		
        			}
        			else
        			{
        				br=bm;
        			}
        		}
        		ans=max(ans,bl-i);
        		i=bl;
        	}		
        }
        cout<<ans;
	return 0;
}


