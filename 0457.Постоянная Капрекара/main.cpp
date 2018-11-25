#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<cstdio>
#include<algorithm>
 
#define f first
#define s second
#define pb push_back
#define ll long long
 
using namespace std;
 
    int n,k,ans;
 
    int f(int a)
    {
        int d1=a/1000,d2=(a/100)%10,d3=(a/10)%10,d4=a%10;
        if (d1>d2) swap(d1,d2);
        if (d2>d3) swap(d2,d3);
        if (d3>d4) swap(d3,d4);
        if (d1>d2) swap(d1,d2);
        if (d2>d3) swap(d2,d3);
        if (d1>d2) swap(d1,d2);
        ans++;
        return (d4*1000+d3*100+d2*10+d1)-(d1*1000+d2*100+d3*10+d4);     
    }
 
int main()
{       
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    k=n;
    while (k!=f(k))
    {
        k=f(k);
    }
    cout<<k<<endl<<(ans-1)/2;
    return 0;
}