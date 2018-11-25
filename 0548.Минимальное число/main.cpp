#include<bits/stdc++.h>

using namespace std;

vector<string> decompose(string s)
{
	size_t i = 0;
	string temp;
	vector<string> v;
	while(s.size())
	{
		if(i + 1 >= s.size() || s[i] < s[i + 1])
		{
			temp = s.substr(0, i + 1);
			s = s.substr(i + 1);
			i = 0;
			v.push_back(temp);
			continue;
		}
		i++;
	}
	return v;
}

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	vector<string> v1 = decompose(s1);
	vector<string> v2 = decompose(s2);
	size_t i = 0;
	size_t j = 0;
	while(i != v1.size() || j != v2.size())
	{
		if(j == v2.size() || (i != v1.size() && v1[i] + ":" < v2[j] + ":"))
		{
			cout<<v1[i];
			i++;
		} 
		else
		if(i == v1.size() || (j != v2.size() && v1[i] + ":" > v2[j] + ":"))
		{
			cout << v2[j];
			j++;
		} 
		else
		{
			size_t a = i, b = j;
			while(a < v1.size() && b < v2.size() && v1[a] == v2[b])
			{
				a++;
				b++;
			}
			if(a >= v1.size())
			{
				cout << v2[j];
				j++;
				continue;
			}			
			if(b >= v2.size())
			{
				cout << v1[i];
				i++;
				continue;
			}
			if(v1[a] + ":" < v2[b] + ":")
			{
				cout << v1[i];
				i++;
				continue;
			} 
			else
			{		
				cout << v2[j];
				j++;
				continue;
			}           
		}
	}
	return 0;
}
