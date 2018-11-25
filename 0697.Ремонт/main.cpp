#include<fstream>
int a,b,c;
main()
{
	std::fstream i("input.txt");
	std::ofstream o("output.txt");
	i>>a>>b>>c;
	a=(a+b)*c+7;
	o<<(a/8?a/8:1);
}