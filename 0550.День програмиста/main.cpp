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
	int n;
	cin>>n;	
        if ((n<1000) && (n>=100))
		if ((n % 400==0)||((n % 4==0) && (n % 100 !=0))) 
			cout<<"12/09/0"<<n;
		else
			cout<<"13/09/0"<<n;
	else
		if ((n<100) && (n>=10))
			if ((n % 400==0)||((n % 4==0) && (n % 100 !=0)))
				cout<<"12/09/00"<<n;
			else
				cout<<"13/09/00"<<n;
		else
			if (n<10)  
				if ((n % 400==0) || ((n %4==0) && (n % 100 !=0)))
                                	cout<<"12/09/000"<<n;
                                else
					cout<<"13/09/000"<<n;
			else
				if ((n % 400==0) || ((n % 4==0) && (n % 100 !=0)))
                                	cout<<"12/09/"<<n;
                                else
					cout<<"13/09/"<<n;
	return 0;       
}
