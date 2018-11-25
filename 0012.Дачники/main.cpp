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
			
			db s(db a1,db b1,db a2,db b2,db a3,db b3)
			{
				return abs((a1-a3)*(b2-b3)-(a2-a3)*(b1-b3))/2.0;		
			}
			int chek(db x, db y, db x1, db y1, db x2, db y2, db x3, db y3, db x4, db y4)
			{
				db s1,s2,s3,s4, s5;
				s1=s(x1,y1,x2,y2,x,y);
				s2=s(x2,y2,x,y,x3,y3);
				s3=s(x3,y3,x,y,x4,y4);
				s4=s(x1,y1,x,y,x4,y4);
				s5=s(x1, y1, x2, y2, x3, y3);
				if (s1 + s2 + s3 + s4 == 2 * s5)
					return 1;
				else
					return 0;
			}       

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n, a[11],k=0;
	cin>>n;
	for(i,0,n)
	{
		cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9];
		k+=chek(db(a[0]),db(a[1]),db(a[2]),db(a[3]),db(a[4]),db(a[5]),db(a[6]),db(a[7]),db(a[8]),db(a[9]));
	}
	cout<<k;
	return 0;
}
