#include<bits/stdc++.h>
#define b break
using namespace std;
list<string> a={""};
int o,s;
char c;
main()
{
	auto z=a.begin(),k=z;
	cin>>noskipws;
	while(cin>>c)
	{
		switch(c)
		{
			case 60:
				if(!s)
				{
					if(z!=k)
						a.erase(z--);
				}
				else
					(*z).pop_back();
				b;
				case 94:
					if(z!=k)
						z--;
						b;
				case '|':
					if(++z==a.end())
						z--;
					b;
				case 92:
					a.insert(++z,"");
					z--;
					b;
				default:
					*z+=c;
		}
		s=(*z).size();
		o=o<s?s:o;
	}
	cout<<o;
}