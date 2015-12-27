#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
/*
Ввести значение параметра а  и вывести количество корней уравнения x^2+2|x-3|=a
*/
int main()
{
double a;
cin>>a;

if (a>=0) {
	       if(a<5) cout<<0<<endl;
	       if(a==5) cout<<1<<endl;
	   if (a>=9) cout<<2<<endl; 

	       

 }
else cout<<0<<endl;      

return EXIT_SUCCESS;


/*
x^2+2|x-3|=a
a<0 корней нет 

a>=0
  x<3                    
    x^2-2x+6-a=0
    (x-1)^2=a-5 (a-5>0 a>5)
    x=1+sqrt(a-5) <3 при a < 9  
    x=1-sqrt(a-5) <3 при любом a>5
  x>=3
    x^2+2x-6-a=0
	(x+1)^2=a+7
	x=-1+sqrt(a+7)>=3 при a>9
	x=-1-sqrt(a+7)<3 при любом a
*/
}
