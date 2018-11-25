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


int n,k;

	int ans(int a,int b,int p=1)
	{
		if(p<n)
		{
			return ans((a+b)*(k-1),a,p+1);
		} 
		else
		{
			return a+b;
		}
	}
	
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin>>n>>k;
	cout<<ans(k-1,0);
	return 0;
}


