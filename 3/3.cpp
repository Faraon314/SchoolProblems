void sort(double mas[],int n){
	int k=0;

	for (int j = 0; j < n; j++){
		for (int i = 0; i < n; i++){
			if (mas[k] >= mas[i]) k = i;
		}
		swap(mas[k], mas[0]);
	}
	
}


 void interval(double arg[]){
	 double Lon[3];

	 for(int i=0;i<3;i++){
	 Lon[i]=arg[i+1]-arg[i];
	 }
	 sort(Lon,3);

	 for(int i=1;i<3;i++){
	 arg[i]=arg[i-1]+Lon[i-1];
	 }
 
 }
