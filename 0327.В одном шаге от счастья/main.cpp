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

		int chek(int a)
		{
			if(abs((a%10+(a/10)%10+(a/100)%10)-(a/100000+(a/10000)%10+(a/1000)%10))==0)
				return 1;
			else
				return 0;
		}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n, b;
	cin>>n;
	for(i,0,n)
	{
		cin>>b;
		if ((chek(b+1)==1)||(chek(b-1)==1)) 
			cout<<"Yes";
		else
			cout<<"No";
	        cout<<endl;
	}
        return 0;
}
