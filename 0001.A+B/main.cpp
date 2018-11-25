#include<fstream>
main()
{
	std::fstream x("input.txt");
	std::ofstream y("output.txt");
	int a,b;
	x>>a>>b;
	y<<a+b;
}

