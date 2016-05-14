#include <iostream>
#include <cstdlib>
using namespace std;
/*
Ввести с клавиатуры стороны треугольника и вычислить угол, 
противолежащий стороне, которая была введена первой.
*/
int main()
{
double a,b,c;
cin>>c>>b>>a;//вводим стороны

cout<<(acos((a*a+b*b-c*c)/(2*a*b)))<<endl;//по теореме косинусов

return EXIT_SUCCESS;
}
