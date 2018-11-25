#include<fstream>
main()
{
	std::fstream x("input.txt");
	std::ofstream m("output.txt");           
	int u,z,h,c,j;
	x>>u>>h>>z>>h>>c>>j;
	z==u ? m<<2*z-c<<' '<<j : m<<c<<' '<<2*h-j; 
}                                                            	