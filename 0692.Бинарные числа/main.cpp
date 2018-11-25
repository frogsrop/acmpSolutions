#include<fstream>
int n;main(){std::fstream i("input.txt");std::ofstream o("output.txt");i>>n;for(;n%2==0 && n!=0;)n<<1;o<<(n==1?"YES":"NO");}