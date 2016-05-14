#include <iostream>
#include <cstdlib>
using namespace std;
/*
Ввести число, и сложить в нем по модулю 2 кажный двоичный разряд с соседними с ним.
*/
int main()
{
int a,b=0;
cin>>a;
a=(a>>1)^a^(a<<1);

for (int i =31;i>=0;i--){if ((a>>i)&1==1) b=1;
                         if (b==1) cout<<((a>>i)&1)<<endl;
                        } //вывод в двоичной записи  

}
