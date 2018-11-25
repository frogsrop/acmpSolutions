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

 
int n,m,a[100][100],b[100][100],ans,x,y;


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
    x=0;
    b[0][0]=1;
    while(x<m)
    {
        x+=a[x][0];
        b[x][0]=1;      
    }
    y=0;
    while(y<n)
    {
        y+=a[0][y];
        b[0][y]=1;      
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            for(int y=i-1;y>=0;y--)
            {
                if (a[j][y]==i-y)
                {
                    b[j][i]+=b[j][y];
                }
            }
            for(int x=j-1;x>=0;x--)
            {
                if (a[x][i]==j-x)
                {
                    b[j][i]+=b[x][i];;
                }
            }
 
        }
    }
    cout<<b[m-1][n-1];
    return 0;
}
