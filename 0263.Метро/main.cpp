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
	int a,b,c; 
	cin>>a>>b>>c; 
	cout<<min(abs(max(b,c)-min(b,c)-1) , abs(a-max(b,c)+min(b,c)-1)); 
	return 0; 
} 
