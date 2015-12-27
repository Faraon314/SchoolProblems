#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
/*
Ввести a и вычислить кубический корень из a, решая уравнение x^3-a=0 методом Ньютона.
*/
int main()
{
double a,e=0.0000001,x1,x2;
cin>>a;
x2=0.0001;
x1=0.001;
while (fabs(x1-x2)>e){
	x2=x1;
	x1=x2-(x2*x2*x2-a)/(3*x2*x2);
}
cout<<x2<<endl;


return EXIT_SUCCESS;
}
