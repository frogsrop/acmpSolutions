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

		int f(vector<int> a,vector<int> b)
		{
			int i=0;
			if (a.size() > b.size()) 
				return 1;
			else
				if (a.size() < b.size())
					return 2;
				else
				{	
					while(i<a.size())
					{
					if (a[i]!=b[i])
					{
						if (a[i]>b[i]) 
			        			{
								return 1;
			        			}
			        		else                                                                    
			        			return 2;
			        	}		
			        	i++;  
			        	
			        	}
			        }
		} 
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,k=0;
	string s;
	vector<int> maxi,now;
	n=3;
	cin>>s;
	while(k<s.size())
	{
		maxi.pb((int(s[k]))-48);
		k++;
	}
	for(j,0,n-1)
	{
		cin>>s;
		k=0;
		now.clear();
		while(k<s.size())
		{	
			now.pb((int(s[k]))-48);
			k++;
		}
		if (f(maxi,now)==2)maxi=now;
	}       
	for(j,0,maxi.size())
		cout<<maxi[j]; 
	return 0;
}
                  




