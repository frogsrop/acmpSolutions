#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<cstdio>
#include<algorithm>
 
#define f first
#define s second
#define ll long long
#define pb push_back
 
using namespace std;
 
    int n;
    double ans;
    pair<double,double> p[1000]; 
 
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    p[0].f=p[0].s=p[n+1].f=p[n+1].s=0;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].f>>p[i].s;
    }
    for(int i=0;i<=n;i++)
    {
        ans+=sqrt(pow(p[i].f-p[i+1].f,2)+pow(p[i].s-p[i+1].s,2));       
    }
    printf("%.9f",ans);
    return 0;
}