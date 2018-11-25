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


    int n;
    string s;
    bool chek=0;

    bool checker(char c)
    {
    	string s1={'A', 'B', 'C', 'E', 'H', 'K', 'M', 'O', 'P', 'T', 'X', 'Y'}; 
    	for(int i=0;i<s1.size();i++)
    		if(c==s1[i])
    			return 1;
    	return 0;
    }

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int ct=0;
		chek=0;
		cin>>s;
		while(checker(s[ct])==1 && ct<s.size())
		{
			ct++;
		}
		if(ct==1)
		{
			while(s[ct]>='0' && s[ct]<='9' && ct<s.size())
			{
				ct++;
			}
			if(ct==4)
			{
				while(checker(s[ct])==1 && ct<s.size())
				{
					ct++;
				}
				if(s.size()==6 && ct==6)
				{
					cout<<"Yes"<<endl;
					chek=1;
				}
			}   	
		}
		if(chek==0)
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}


