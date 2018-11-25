#include<iostream>
#include<fstream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>

#define fors(i, n, m) for(int i=n; i<m; i++)
#define db double
#define s second
#define f first
#define pb push_back

using namespace std;

int main()
{
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	int n,minn=10001,maxx=-10001;	
	for(int r=1;!fin.eof();r++)
	{	
		fin>>n;
		if (r%2==0)
			maxx=max(maxx,n);
		else	
			minn=min(minn,n);
	}
	fout<<maxx+minn;
	return 0;		
}
