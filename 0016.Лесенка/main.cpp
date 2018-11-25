#include<iostream>
#include<cstdio>
#include<fstream>
#include<cstdlib>

#include<vector>
#include<map>
#include<set>
#include<string>
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




using namespace std;




	int ans=0;
	void bil(int n,int k=0)
	{
		int i=k+1,chek=0;
		while(chek==0 && i<=n)
		{
			if((n+1)/2>i)
			{
        			bil(n-i,i);  
        		}
        		else
        		{ 
        			ans++;
        			chek=1;
        		}
        		i++;
        	}   
	}
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	cin>>n;
	bil(n);
	cout<<ans;
	return 0;    
}

