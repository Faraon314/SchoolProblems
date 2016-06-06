

double SummOfMultiplus(double mas[][10]){
	double arg[19]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	double sum=0;

	for(int i=0;i<10;i++){
		for(int j=1;j<10;j++) if (i+j<10) {arg[j]*=mas[i+j][i]; arg[j+9]*=mas[i+j][i];}
		arg[0]*=mas[i][i];
	}

	for(int i=0;i<19;i++){
	sum+=arg[i];
	}
		
         
	return sum;

}
