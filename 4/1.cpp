#include <iostream>

using namespace std;


int main(){
	long double x0;
	long double * const x1=&x0;

	typedef unsigned int *NewType;

	short int * x2;

	double x3;
	double * const x4=&x3;

	unsigned int x5;
	unsigned int * const x6=&x5;

	const bool * x7;

	float x8;
	float * const x9=&x8;
}
