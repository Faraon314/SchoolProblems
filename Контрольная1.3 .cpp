#include <iostream>
#include <cstdlib>
/*
Ввести число и вывести словестный эквивалент оценки.
*/
using namespace std;
int main()
{
int a;
cin>>a;
if ((a>5)|(a<2)) cout<<"0 Не верно введена оценка"<<endl; else {if(a==2)cout<<"2 Неудовлетворительно "<<endl;
if(a==3)cout<<"3 Удовлетворительно"<<endl;
if(a==4)cout<<"4 Хорошо"<<endl;
if(a==5)(cout<<"5 Отлично"<<endl);}
return EXIT_SUCCESS;
}
