#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>

#define for(i, n, m) for(int i=n; i<m; i++)
#define db double
#define s second
#define f first
#define pb push_back

using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	string s;
	int r=2;
	getline(cin, s);
	for(i,0,s.size())
		if (!((s[i]>='0' && s[i]<='9')||(s[i]>='A' && s[i]<='Z')))
		{
			cout<<-1;
			return 0;
		}
       	for(i,0,s.size())
       	{
       		if(s[i]>='0' && s[i]<='9')
       			r=max(int(s[i])-48+1,r);
       		if(s[i]>='A' && s[i]<='Z')
       			r=max(int(s[i])-55+1,r);  
       	}
       	cout<<r;
       	return 0;		
} 
                                
