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


int n,m,k=1;
        
 
int main()
{
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            k=(k*n)%10;
        }
        cout<<k;
    	return 0;
}
