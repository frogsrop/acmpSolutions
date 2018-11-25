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
	string a="qwertyuiopasdfghjklzxcvbnm";
	char b;
	cin>>b;
	if (b=='m') 
		cout<<'q';
	else 
		for(i,0,a.size()-1)
			if (a[i]==b)
			{
				cout<<a[i+1];
				return 0;
			}
	return 0;        
}              
