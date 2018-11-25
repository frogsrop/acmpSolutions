#include<iostream>
#include<cstdio>
#include<fstream>
#include<cstdlib>

#include<vector>
#include<map>
#include<set>
#include<cstring>
#include<queue>
#include<deque>
#include<stack>

#include<cmath>
#include<algorithm>




#define ll long long
#define pb push_back
#define f first
#define s second
#define all(c) c.begin(),c.end()
#define len(s) s.size()
#define inf32 (int)10E8*2
#define inf64 (long long)10E17*9
#define inf86 (double)10E14*9

using namespace std;


   char c[100];
   int i=1,b=1,j=1;

int main()
{                                
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	while(!(cin.eof()))
	{
		c[i]=' ';
		cin>>c[i];
	   if(c[i]==c[i-1])
	   {
	   	i--;
	   }
	   else
	   	i++;
	}
	i--;
	while(j<i)
	{
		if(c[j]=='A')
		{
		   if(b==1)
				b=2;
			else
				if(b==2)
					b=1;
		}    
		if(c[j]=='B')
		{
		   if(b==2)
				b=3;
			else
				if(b==3)
					b=2;
		}  
		if(c[j]=='C')
		{
		   if(b==1)
				b=3;
			else
				if(b==3)
					b=1;
		}  
		j++;
	}
	cout<<b;
	return 0;
}


