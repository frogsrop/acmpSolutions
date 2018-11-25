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
	cin>>s;
	if ((s[0]>='A' && s[0]<='H') 
			&&
	    (s[1]>='1' && s[1]<='8') 
	    		&&
	    (s[3]>='A' && s[3]<='H') 
	    		&&
	    (s[4]>='1' && s[4]<='8') 
	   		&&
	   	        (s[2]=='-'))
	{
		if(((abs(int(s[0])-int(s[3]))==1)&&(abs(int(s[1])-int(s[4]))==2))
						||
		  ((abs(int(s[0])-int(s[3]))==2)&&(abs(int(s[1])-int(s[4]))==1)))
		  	cout<<"YES";
		else
			cout<<"NO";	
	}
	else
		cout<<"ERROR";
	return 0;  
}
