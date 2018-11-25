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


int n,ans;
string s;

 
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>s;
    if (s.size()>1)
    {
        for(int i=0;i<s.size();i++)
        {
            n+=int(s[i])-'0';
        }
        ans++;
        while(n>=10)
        {
            ans++;
            int k=0;
            while(n>0)
            {
                k+=n%10;
                n/=10;
            }
            n=k;
        }
        cout<<n<<' '<<ans;
    }
    else
        cout<<s<<' '<<0;
    return 0;
}
