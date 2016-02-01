//Написать функцию принимающую один параметр и возвращающаяя среднее геометрическое всех переданных ей параметров
double middle(double x){
static double  s=x;
static double k=1;

if (k==1){k++; return x;}

s=pow(pow(s,k-1)*x,1/k);
k++;
return s;
}
