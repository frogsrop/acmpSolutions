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
#include<list>

#include<cmath>
#include<algorithm>




#define ll long long
#define pb push_back
#define all(c) c.begin(),c.end()
#define len(s) s.size()
#define inf32 (int)10E8*2
#define inf64 (long long)10E17*9
#define inf86 (double)10E14*9

using namespace std;

list<string> ans;

int check_sign(char c)
{
	if(c=='<')
		return 1;
	if(c=='^')
		return 2;
	if(c=='|')
		return 3;
	if(c=='\\')
		return 4;
	return 0;
}

int main()
{
	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	char c;
	int now=0;
	ans.pb("");
	list<string>::iterator it=ans.begin();
	bool check=1;
	cin>>noskipws;
	int o=0;
	while(!cin.eof() && check)
    {
   		string s;
   		while(!check_sign(cin.peek()))
   		{
   			if(cin.eof())
   			{
   				check=0;
   				break;
   			}
   			cin>>c;
   			s+=c;
   		}      
   		*it+=s;
   		o=max(o,(int)(*it).size());
   		if(check)
   		{
   			cin>>c;
   			switch(check_sign(c))
   			{
   				case 1:
   					if((*it).size()==0)
   					{
						if(it!=ans.begin())
   						{	
   							auto buf=(--it);
   							ans.erase(++it);
   							it=buf;
   						}
   							
   					}
   					else
   					{
   						(*it).pop_back();
   					}
   					break;
   				case 2:
   					if(it!=ans.begin())
   					{
   						it--;
   					}
   					break;
   				case 3:
   					it++;
   					if(it==ans.end())
   					{
   						it--;
   					}
   					break;
   				case 4:
   					it++;
   					ans.insert(it,"");
   					it--;
   					break;
   				default:
   					break;			
   			}
   		}
   	}
   	/*for(auto t: ans)      
   	{
   		o=max((int)t.size(),o);
   		cout<<t<<endl;
   	}*/	
   	cout<<o;
	return 0;
}


