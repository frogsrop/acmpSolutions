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
 
int n,m;
 
    int gcd(int a,int b)
    {
        return b!=0?gcd(b,a%b):a;
    }
 
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n>>m;
    cout<<(n*m)/gcd(n,m);
    return 0;
}
