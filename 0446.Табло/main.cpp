#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>

#define db double
#define pb push_back
#define f first
#define s second

using namespace std;

int main()
{
	int n, m, a[500][500], k, chek=0;
	char c;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{	
		for(int j=0;j<n;j++)
		{
			cin>>c;
			if (c=='R')
			{
				a[i][j]=1;
			}
			else
				if (c=='G')
				{
					a[i][j]=2;	
				}
				else
					if (c=='B')
					{
						a[i][j]=3;	
					}
					else
						if (c=='.')
						{	
							a[i][j]=4;
						}
		}
	}
	for(int i=0;i<m;i++)
	{	
		for(int j=0;j<n;j++)
	        {
			cin>>k;
			if (k==0)
	                {
	                	if (!(a[i][j]==4))
	                	{
	                		chek=1;
	                	}       
	                }
			else
				if(k==1)
				{
					if (!(a[i][j]==4 || a[i][j]==3))
                                        {
                                        	chek=1;
                                        }
				}
				else
					if(k==2)
					{
						if (!(a[i][j]==4 || a[i][j]==2))
						{
							chek=1;
						}
					}
					else
						if(k==3)
						{
							if (!(a[i][j]==4 || a[i][j]==2 || a[i][j]==3))
							{
								chek=1;
							}
						}
						else
							if(k==4)
							{
								if (!(a[i][j]==4 || a[i][j]==1))
								{
									chek=1;
								}
							}
							else
								if(k==5)
								{
									if (!(a[i][j]==4 || a[i][j]==1 || a[i][j]==3))
									{
										chek=1;
									}               
								}
								else
									if(k==6)
									{
										if (!(a[i][j]==4 || a[i][j]==2 || a[i][j]==1))
										{
											chek=1;
										}
									}
									else
										if(k==7)
										{
											if (!(a[i][j]==4 || a[i][j]==2 || a[i][j]==1 || a[i][j]==3))
											{
												chek=1;
											}
										}	
		}
	}
	if (chek==1)
	{                  
		cout<<"NO";
	}    
	else
		cout<<"YES";
	return 0;
}              
