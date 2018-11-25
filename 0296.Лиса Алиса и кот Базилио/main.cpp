#include<iostream>
#include<cmath>
#include<map>
#include<vector>
#include<algorithm>
#include<cstdio>
 
#define f first
#define s second
#define ll long long
#define pb push_back
 
using namespace std;
 
    int n;
 
int main()
{
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        cin>>n;
        if (n%5==0)
        {
            cout<<n/5<<' '<<0;
        }
        else
            {
                if(n%5==1)
                {
                    cout<<n/5-1<<' '<<2;
                }
                else
                {
                    if(n%5==2)
                    {
                        cout<<n/5-2<<' '<<4;
                    }
                    else
                    {
                        if(n%5==3)
                        {
                            cout<<n/5<<' '<<1; 
                        }
                        else
                        {
                            cout<<n/5-1<<' '<<3;
                        }
                    }
                }
            }
    return 0;
}