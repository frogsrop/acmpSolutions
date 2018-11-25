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


string s;
int i;


int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>s;
    i=s.size()-1;
    cout<<1;
    while(s[i]=='0')
    {
        cout<<0;
        i--;
    }
    return 0;
}
