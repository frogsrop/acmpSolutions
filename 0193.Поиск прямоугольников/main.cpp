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

 
  
int n,m,k,a,ms[300][5];
      
int main()         
{
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        cin>>n>>m>>k;
        for(int i=0;i<=k;i++)
        {
        	ms[i][0]=m+1;
        	ms[i][1]=0;
        	ms[i][2]=0;
        	ms[i][3]=n+1;       
    	}           
        for(int i=0;i<n;i++)
    	{
        	for(int j=0;j<m;j++)
        	{
        	    cin>>a;       
        	    ms[a][0]=min(ms[a][0],j);
        	    ms[a][1]=max(ms[a][1],i);
        	    ms[a][2]=max(ms[a][2],j);
        	    ms[a][3]=min(ms[a][3],i);
        	}
    	}
    	for(int i=1;i<=k;i++)
    	{
    	    cout<<ms[i][0]<<' '<<n-1-ms[i][1]<<' '<<ms[i][2]+1<<' '<<n-ms[i][3]<<endl;
    	}
    	return 0;
}
