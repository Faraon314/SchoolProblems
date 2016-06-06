#include <iostream>
#include <string>

using namespace std;

class account {	public:int number;double balance; string name,adr,cur;account();};
account::account()
{
	number=0;
	balance=0;
	name=' ';
	adr=' ';
	cur=' ';
}

class bank {
	int num;account* mas;
public:bank(int);bank(const bank&);~bank(); void operator=(bank);void putinf();void print(string);void addmoney(int,double);double removemoney(int,double); void print();
};
bank::bank(int n)
{
	num=n;
	mas=new account [n];
	}
bank::bank(const bank& a)
{
	num=a.num;
    mas = new account [num];
	for(int i=0;i<num;i++) mas[i]=a.mas[i];
}
bank::~bank()
{
	delete[] mas; 
}
void bank::operator=(bank a)
{
	num=a.num;
	for(int i=0;i<num;i++) mas[i]=a.mas[i];
}
void bank::putinf()
{
	int i=0;
	for(i;i<num;i++) {cin>>mas[i].number;
	                 cin>>mas[i].balance;
			         cin>>mas[i].name;
				     cin>>mas[i].adr;
					 cin>>mas[i].cur;}
	cout<<endl;
}
void bank::print(string s)
{

	for(int i=0;i<num;i++)
			if(mas[i].cur==s) {cout<<mas[i].number<<' '<<mas[i].balance<<' '<<mas[i].name<<' '<<mas[i].adr<<' '<<mas[i].cur<<endl;}
   cout<<endl;
	
}
void bank::addmoney(int n,double x)
{
	for(int i=0;i<num;i++) if(mas[i].number==n){mas[i].balance+=x;break;}
}
double bank::removemoney(int n,double x)
{
	double a=0;
	for(int i=0;i<num;i++) if(mas[i].number==n) if (mas[i].balance<x) {a=mas[i].balance;mas[i].balance=0;return a;} 
										else{mas[i].balance-=x;return x;}
}

void bank::print()
{

	for(int i=0;i<num;i++)
			{cout<<mas[i].number<<' '<<mas[i].balance<<' '<<mas[i].name<<' '<<mas[i].adr<<' '<<mas[i].cur<<endl;}
	cout<<endl;
	
}
int main()
{
		
	}
