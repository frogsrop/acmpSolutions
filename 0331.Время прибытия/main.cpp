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
	int a,b,c,d;
	cin>>s;
	cin>>a>>b;
	c=b%60;
	d=b/60+a;
	a=(int(s[0])-48)*10+int(s[1])-48;
	b=(int(s[3])-48)*10+int(s[4])-48;	
	if ((((a+d)+((b+c)/60))%24)>9) 
		cout<<(((a+d)+((b+c)/60))%24);
	else
		cout<<0<<(((a+d)+((b+c)/60))%24);
	cout<<':';
	if ((b+c)%60>9) 
		cout<<(b+c)%60;
	else
		cout<<0<<(b+c)%60;
	return 0;
}
