#include<iostream>
#include<cstdio>
#include<fstream>
#include<cstdlib>

#include<vector>
#include<map>
#include<set>
#include<cstring>
#include<queue>

#include<cmath>

#include<algorithm>




#define ll long long
#define pb push_back
#define f first
#define s second
#define all(c) c.begin(),c.end()




using namespace std;

	
int n,m;
 
	int f(int a,int b)
	{
		return b>0?f(b,a%b):a;
	}
 

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n>>m;
    for(int i=0;i<f(n,m);i++)
    {
    	cout<<1;
    }
    return 0;
} 
