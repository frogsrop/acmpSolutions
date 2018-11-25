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
	int  k,w,a1,a2,a3,b1,b2,b3;
	cin>>k>>w;
	cin>>a1>>b1>>a2>>b2>>a3>>b3;
	if (a1<=w && b1>=k) 
		cout<<"YES";
	else
		if (a2<=w && b2>=k)
			cout<<"YES";
		else
			if (a3<=w && b3>=k)
				cout<<"YES";
			else
				if (a1+a2<=w && b1+b2>=k)
					cout<<"YES";
				else
					if (a1+a3<=w && b1+a3>=k)
						cout<<"YES";
			                else
			                	if (a2+a3<=w && b2+b3>=k)
			                		cout<<"YES";
			                	else
			                		if (a1+a2+a3<=w && b1+b2+b3>=k)
			                			cout<<"YES";
			                		else
			                			cout<<"NO";
	return 0;
}
