#include<iostream>
#include<cstdio>
#include<cmath>  
#include<algorithm>
#include<vector>
#include<cstring> 
#include<fstream>

#define fors(i,n,m) for(int i=n;i<m;i++)
#define pb push_back
#define db double
#define	f first
#define s second

using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
        int n,m,b=0,k=0;
        cin>>n>>m;
        if(n%10==m%10)
        {
        	b++;
        }
        else
        {
        	if(n%10==m/10%10 || n%10==m/100%10 || n%10==m/1000)
        	{
        		k++;
        	}
        }
        



        if(n/10%10==m/10%10)
        {
        	b++;
        }
        else
        {
        	if(n/10%10==m%10 || n/10%10==m/100%10 || n/10%10==m/1000)
        	{
        		k++;
        	} 
        }



	if(n/100%10==m/100%10)
        {
        	b++;
        }
        else
	{
        	if(n/100%10==m%10 || n/100%10==m/10%10 || n/100%10==m/1000)
        	{
        		k++;
        	} 
        }
	
	if(n/1000==m/1000)
        {
        	b++;
        }
        else
        {
        	if(n/1000==m%10 || n/1000==m/10%10 || n/1000==m/100%10)
        	{
        		k++;
        	}
        }
        cout<<b<<' '<<k;
        
        
         
        return 0;
}