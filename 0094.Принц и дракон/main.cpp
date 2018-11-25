#include<iostream>
#include<cstdio>
#include<fstream>
#include<cstdlib>

#include<vector>
#include<map>
#include<set>
#include<cstring>
#include<queue>

#include<cmath>

#include<algorithm>




#define ll long long
#define pb push_back
#define f first
#define s second
#define all(c) c.begin(),c.end()




using namespace std;


int a,b,c,i;

 
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>a>>b>>c;
    if(b-a<=0)
    {
        cout<<1;
        return 0;
    }
    if(a<=c)
    {
        cout<<"NO";
        return 0;
    }
    else
    {
    	cout<<((abs(-b+c)-1)/abs(c-a))+1;
    	return 0;
    }
    return 0;
}
