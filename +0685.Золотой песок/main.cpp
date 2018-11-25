#include<algorithm>
#include<fstream>
using namespace std;
int a[7],k;
main()
{
    fstream f("input.txt");
    ofstream o("output.txt");
    while(!f.eof())f>>a[k++];
    sort(a,a+3);
    sort(a+3,a+6);
    for(;k>2;) a[6]+=a[k--]*a[k-3];
    o<<a[6];
}
