#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdio>
 
#define ll long long
#define pb push_back
#define f first
#define s second
#define all(c) c.begin() c.end()
 
using namespace std;
 
    int n;
    vector<int> a;
 
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> n;
    while(n > 0)
    {
        a.pb(n % 2);
        n /= 2;   
    }
    n = 0;
    for(size_t i = 0; i < a.size(); i++)
    {
        n += a[i] * int(pow(2.0, double(a.size() - 1 - i)));
    }
    cout<<n;
    return 0;
}