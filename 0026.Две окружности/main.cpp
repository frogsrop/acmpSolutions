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


using namespace std;

	db s(db x1,db y1,db x2,db y2)
	{
		return(sqrt(pow((x2-x1),2)+pow((y2-y1),2)));			
	} 

int main()
{
	freopen("input.txt","r",stdin);                                                                           
	freopen("output.txt","w",stdout);
	db a[4][4];
	cin>>a[1][1]>>a[2][1]>>a[3][1];
	cin>>a[1][2]>>a[2][2]>>a[3][2];
	if(a[1][1]==a[1][2]&&a[2][1]==a[2][2]&&a[3][1]==a[3][2])
        	cout<<"YES";
        else
        if (((s(a[1][1],a[2][1],a[1][2],a[2][2])) <= (a[3][1]+a[3][2]))&&
           ((a[3][1]) <= (s(a[1][1],a[2][1],a[1][2],a[2][2])+a[3][2]))&&
           ((a[3][2]) <= (a[3][1]+s(a[1][1],a[2][1],a[1][2],a[2][2]))))
         	cout<<"YES";                                                                                                    
        else
        	cout<<"NO";
	return 0;
}
        
