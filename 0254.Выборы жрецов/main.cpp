#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
 
#define f first
#define s second
#define ll long long
#define pb push_back
#define all(c) c.begin(),c.end()
 
using namespace std;
 
    int n,m,a[5001],b[5001],x,y;
     
 
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        for(int j=0;j<n;j++)
        {
            if (a[j]==x)
            {
                b[j]=y;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<' ';
    }
    return 0;
}