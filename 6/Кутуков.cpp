#include <iostream>
#include <string>

using namespace std;

class product { public:string name, ediniz; int EdVPrice/*число единиц для которых указана цена*/, kolchestvo; int Day, maxDay; double price; product(); };
product::product()
{
	name = ' ';
	ediniz = ' ';
	EdVPrice = 0;
	kolchestvo = 0;
	Day = 0;
	maxDay = 0;
	price = 0;
		
}

class magazin {
	int num; product* mas;
public:magazin(int); magazin(const magazin&); ~magazin(); void operator=(magazin); void putinf(); void print(string); void deleteProduct(int); void printPrice(); void printAll();
};
magazin::magazin(int n)
{
	num = n;
	mas = new product[n];
}
magazin::magazin(const magazin& a)
{
	num = a.num;
	mas = new product[num];
	for (int i = 0; i<num; i++) mas[i] = a.mas[i];
}
magazin::~magazin()
{
	delete[] mas;
}
void magazin::operator=(magazin a)
{
	num = a.num;
	delete[] mas;
	mas = new product[num];
	for (int i = 0; i<num; i++) mas[i] = a.mas[i];
}
void magazin::putinf()
{
	int i = 0;
	for (i; i<num; i++) {
		cin >> mas[i].name;
		cin >> mas[i].ediniz;
		cin >> mas[i].EdVPrice;
		cin >> mas[i].kolchestvo;
		cin >> mas[i].Day;
		cin >> mas[i].maxDay;
		cin >> mas[i].price;

	}
	cout << endl;
}
void magazin::print(string s)
{

	for (int i = 0; i<num; i++)
		if (mas[i].name == s) { cout << mas[i].name << ' ' << mas[i].ediniz << ' ' << mas[i].EdVPrice << ' ' << mas[i].kolchestvo << ' ' << mas[i].Day << ' ' << mas[i].maxDay<<' ' << mas[i].price << endl; }
	cout << endl;

}
void magazin::deleteProduct(int SomeDay)
{
	for (int i = 0; i<num; i++) if ((mas[i].Day+mas[i].maxDay) <= SomeDay){ mas[i].kolchestvo =0; }
}
void magazin::printPrice()
{
	double sum=0;
	for (int i = 0; i<num; i++)
	{
		sum += (mas[i].price*mas[i].kolchestvo) / mas[i].EdVPrice;
	}
	cout <<sum<<endl;

}

void magazin::printAll()
{

	for (int i = 0; i < num; i++)
	{
		cout << mas[i].name << ' ' << mas[i].ediniz << ' ' << mas[i].EdVPrice << ' ' << mas[i].kolchestvo << ' ' << mas[i].Day << ' ' << mas[i].maxDay <<' ' << mas[i].price << endl;
	}
	cout << endl;
}

int main()
{
	magazin Prizma(3);
	
	Prizma.printAll();
	Prizma.putinf();
	Prizma.printAll();
	Prizma.printPrice();
	
	
	

}