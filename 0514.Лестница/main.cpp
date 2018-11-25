#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

#define pb push_back
#define f first
#define s second
#define db double

using namespace std;

int main()                                                      
{
	int n,res=1,i=1;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin>>n;
	while (res<n)
	{
		res=(i*(i+1))/2;
		i++;
	}
	if (n==1) 
		cout<<1;
	else
		if (res==n) 
			cout<<i-1;
		else
			cout<<i-2;
        return 0;
} 
