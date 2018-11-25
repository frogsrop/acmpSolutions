#include<iostream>
#include<cstdio>
#include<fstream>
#include<cstdlib>

#include<vector>
#include<map>
#include<set>
#include<string>
#include<queue>

#include<cmath>

#include<algorithm>




#define ll long long
#define pb push_back
#define f first
#define s second
#define all(c) c.begin(),c.end()
#define len size()



using namespace std;
 
vector<int> a,b,c;
 
    void sum()
    {
        int temp=0; 
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        if (a<b)
        {
            for(int i=a.len;i<=b.len+1;i++)
            {
                a.pb(0);
            }
            b.pb(0);
            swap(a,b);
        }
        else
        {
            for(int i=b.len;i<=a.len+1;i++)
            {
                b.pb(0);
            }
            a.pb(0);
             
        }   
         
        for(int i=0;i<a.len;i++)
        {
            a[i]+=temp;
            temp=(a[i]+b[i])/10;
            a[i]=(a[i]+b[i])%10;
        }
        if(a[a.len-1]==0)
        {
            a.pop_back();
        }
        reverse(a.begin(), a.end());
    }
 
int main()                                       
{
    string fd,sd;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>fd>>sd;                               
        for(int i=0;i<fd.len;i++)
    {
        a.pb(int(fd[i]-'0'));   
    }   
    for(int i=0;i<sd.len;i++)
    {
        b.pb(int(sd[i]-'0'));
    }
    sum();
    for(int i=0;i<a.len;i++)
    cout<<a[i];
        return 0;
}
