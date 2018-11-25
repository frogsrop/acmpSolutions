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





using namespace std;

 
int a[21][21],n,m;

 
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[j][i];
            }
        }
        for(int i=1;i<m;i++)
        {
            a[i][0]+=a[i-1][0];
        }
        for(int i=1;i<n;i++)
        {
            a[0][i]+=a[0][i-1];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                a[j][i]+=min(a[j][i-1],a[j-1][i]);  
            }
        }
        cout<<a[m-1][n-1];
    return 0;
}
