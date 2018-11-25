#include<iostream>
#include<fstream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>

#define fors(i, n, m) for(int i=n; i<m; i++)
#define db double
#define s second
#define f first
#define pb push_back

using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,ans=0;
	string s;
	cin>>n;
        fors(i,0,n)
        {
        	cin>>s;
        	if(s[0]==s[3])
		{
	        	ans++;
		}
	}
	cout<<ans;
	return 0;
}
           	
