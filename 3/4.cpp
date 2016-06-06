int binary_search(double mas[], int n, double x){
	int start = 0, end = n, mid = n / 2;
	while ((end-start)>=0)
	{
		if (mas[mid] == x) return mid;
		if (mas[mid] < x){
			start = mid; mid = (start + end) / 2;
		}
		else { end = mid; mid = (start + end) / 2; }


	}
}

double avarageIndex(double mas[]){
	double sum=0;
	double arg[3]={100,150,200};
	int k=0;
	 for(int i=0;i<3;i++){
	     int index=0;
		 int m=0;
		 index=binary_search(mas, 10, arg[i]);
	    
		 m=index;
		  while(mas[m]==arg[i]){
				sum+=m;
				k++;
				m++;
				if (m>300) break;
				
	      }
		 
		 if ((index-1)>0) m=index-1; else break;

		  while(mas[m]==arg[i]){
				sum+=m;
				k++;
				m--;
				if (m<0) break;
				
	      }
	 }
	 return sum/k;
}

