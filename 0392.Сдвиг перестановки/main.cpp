#include<iostream>
#include<cmath>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<map>
 
#define ll long long
#define pb push_back
#define f first
#define s second
 
using namespace std;
     
    int n,chek,k;
    vector<int> a;
 
int main()
{
    int l;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&l);
        if (l==1)
        {
            chek=1;
            k=i;
        }
        if (chek==1)
        {
            printf("%d ",l);
        }
        a.pb(l);
    }
    /*for(int i=0;i<n-1;i++)
    {
        swap(a[i],a[n-1]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }*/
    for(int i=0;i<k;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}