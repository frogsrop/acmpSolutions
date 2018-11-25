#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>

#define fors(i,n,m) for(int i=n;i<m;i++)
#define db double
#define pb push_back
#define f first
#define s second

using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	string s;
	int ans=0;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if (s[i]=='>' && i+1>=4)
		{
			if (s[i-1]=='-' && s[i-2]=='-' && s[i-3]=='>' && s[i-4]=='>')
				ans++;	
		}       	
		if (s[i]=='<' && i+1<=s.size()-4)
                {
			if (s[i+1]=='-' && s[i+2]=='-' && s[i+3]=='<' && s[i+4]=='<')
				ans++;
		}
	}
	cout<<ans;
	return 0;
}