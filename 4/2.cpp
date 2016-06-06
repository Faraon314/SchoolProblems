
int* fun(int arg[],int size,int *p,int *k){

	int *mas1[11];
	int *mas2[21];
	
	int n1=1;
    mas1[0]=p;
		for(int i=1;i<11;i++){
		if(((mas1[i-1]-arg+*mas1[i-1])<size)&&((mas1[i-1]-arg+*mas1[i-1])>0)) {mas1[i]=mas1[i-1]+*mas1[i-1];n1++;}
		else break;
	}

    int n2=1;
	mas2[0]=k;
	for(int i=1;i<21;i++){
		if((mas2[i-1]-arg+*mas2[i-1]<size)&&(mas2[i-1]-arg+*mas2[i-1]>0)) {mas2[i]=mas2[i-1]+*mas2[i-1];n2++;}
		else break;
	}

	for(int i=0;i<n1;i++)
		for(int j=0;j<n2;j++) if(mas1[i]==mas2[j]) return mas1[i];
		
return 0;
}


