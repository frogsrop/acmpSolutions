#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstdio>

#include<vector>
#include<stack>
#include<queue>
#include<deque>
#include<set> 
#include<map>
#include<cstring>

#include<cmath>
#include<algorithm>

#define ll long long
#define s second                                                               
#define f first
#define pb push_back
#define all(c) c.begin(),c.end()
 
using namespace std;                                                                                                   
 
    int n;
    
    map<string,pair<vector<int>,int> > dt;
    
    vector<string> st;
    pair<int,pair<int,int> >  ks[10000];
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    int x,y,r,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        st.pb(s);
        cin>>x>>y>>r;
        ks[i].f=r;
        ks[i].s=make_pair(x,y);                                        
        dt[s].f.pb(i);  
    }
    map<string,pair<vector<int>,int> >::iterator it;
    cin>>a>>b;
    for(it=dt.begin();it!=dt.end();it++)
    {
        for(int i=0;i<(*it).s.f.size();i++)
        {
            if (ks[(*it).s.f[i]].f*ks[(*it).s.f[i]].f>=(a-ks[(*it).s.f[i]].s.f)*(a-ks[(*it).s.f[i]].s.f)+(b-ks[(*it).s.f[i]].s.s)*(b-ks[(*it).s.f[i]].s.s))
            {
                (*it).s.s++;    
            }   
        }
    }
    cout<<dt.size()<<endl;
    for(int i=0;i<st.size();i++)
    {
        if (dt[st[i]].s!=-1)
        {
            cout<<st[i]<<' '<<dt[st[i]].s<<endl;
            dt[st[i]].s=-1;
        }
    }
    return 0;
}