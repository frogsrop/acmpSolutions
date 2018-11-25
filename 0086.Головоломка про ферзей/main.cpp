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


int n; 

 
int main() 
{ 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    cin>>n; 
    cout<<n*(n-3)+2; 
    return 0; 
} 
