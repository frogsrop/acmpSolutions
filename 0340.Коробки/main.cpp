#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>

#define fors(i,n,m) for(int i=n;i<m;i++)
#define db double
#define f first
#define s second
#define pb push_back

using namespace std;

	int fb, sb; 	
	
	void fun(int n, int m)
	{
		if(n>=m) 
			fb++;
           	if(n<=m)
        		sb++;
	}
		
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a[4],b[4];
	cin>>a[0]>>a[1]>>a[2];
	cin>>b[0]>>b[1]>>b[2];
	sort(a,a+3);
	sort(b,b+3);
	fors(i,0,3)	
		fun(a[i],b[i]);
	if(a[0]==b[0] && a[1]==b[1] && a[2]==b[2])
		cout<<"Boxes are equal";
        else	
        	if(fb==3)
			cout<<"The first box is larger than the second one";
        	else
        		if(sb==3)
        			cout<<"The first box is smaller than the second one";
        		else
        			cout<<"Boxes are incomparable";
	return 0;
}
