#include<iostream>
#include<cstdio>
#include<fstream>
#include<cstdlib>

#include<vector>
#include<map>
#include<set>
#include<string>
#include<queue>

#include<cmath>

#include<algorithm>




#define ll long long
#define pb push_back
#define f first
#define s second
#define all(c) c.begin(),c.end()




using namespace std;



int main()
{
	ifstream in("input.txt");
	ofstream out("output.txt");
	float  a,b=1,c=0;
	int n;
	in>>n;
	while(n>0)
	{
		in>>a;
		b=b*a+c*(1-a);
		c=1-b;
		n--;
	}
	out<<b;
}
