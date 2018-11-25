#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<cstring>

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
	int a, b, c;
	cin>>a>>b>>c;
	if (a!=0)
		cout<<a;
	if ((a==0)&&(c==0)&&(b==1))
		cout<<'x';
	else
		if ((b==1)&&(a==0)) 
			cout<<'x';
		else 
			if ((b>0)&&(a==0)) 
				cout<<b<<'x';
			else		
				if (b==1) 
					cout<<"+x";
				else
					if (b==-1) 
						cout<<"-x";
					else
						if ((b>0)&&(a!=0)) 
							cout<<'+'<<b<<'x';
						else
							if ((b<0)&&(a!=0)) 
								cout<<b<<'x';
	if ((b==0)&&(a==0)&&(c==1)) 
		cout<<'y';
	else
		if ((b==0)&&(a==0)&&(c>0)) 
			cout<<c<<'y';
		else
			if (c==1) 
				cout<<"+y";
			else
				if (c==-1) 
					cout<<"-y";
				else
					if (c>0) 
						cout<<'+'<<c<<'y';
					else
						if (c<0) 
							cout<<c<<'y';
	if ((a==0) &&(b==0)&&(c==0)) 
		cout<<0;
	return 0;
}