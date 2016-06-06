

double RaznostSumm(double mas[]){
double sum1=0;
double sum2=0;

   for(int i=0;i<10;i+=3){
	   if ((i+1)<10)sum1+=mas[i+1];
	   if ((i+2)<10) sum2+=mas[i+2];
   }
   return sum1-sum2;
}

