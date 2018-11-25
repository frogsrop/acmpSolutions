#include<fstream>
int n;
main()
{
 std::fstream i("input.txt");
 std::ofstream o("output.txt");
 o<<(n&(n-1)?"NO":"YES");
}       
