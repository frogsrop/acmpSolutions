#include<fstream>
	int r(int n, int k)
	{
		return n>1 ? (r(n-1, k)+k-1)%n+1:1;
	}

main()
{
	std::fstream q("input.txt");
	std::ofstream g("output.txt");
	int a,b;
	q>>a>>b;
	g<<r(a,b);
}
