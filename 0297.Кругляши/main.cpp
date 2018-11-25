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
	string a;
	int k=0,r;
	cin>>a;
        r=a.size();
        for(i,0,r)
        {
        	if ((int(a[0])-48==0)||(int(a[0])-48==9)||(int(a[0])-48==6))
        		k++;
        	else
        		if (int(a[0])-48==8) 
        			k=k+2; 
        	a.erase(0, 1);
        }
        cout<<k;
        return 0;
}
