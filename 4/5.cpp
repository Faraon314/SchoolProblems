
int f(int a,int b,int c){
	return a+b+c;
}
int g(int a,int b,int c){
	return a-b+c;
}
int (*p1)(int a,int b,int c)=f;
int (*p2)(int a,int b,int c)=g;


int fun(int (*f)(int a,int b,int c),int (*g)(int a,int b,int c)){
	
	int mas[11];
	for (int i=0;i<11;i++) cin>>mas[i];
	int a=mas[0];
	bool b=false;

     for(int i=1;i<11;i+=2){
		 if (b) {a=f(a,mas[i],mas[i+1]);b=false;}
		 else {a=g(a,mas[i],mas[i+1]);b=true;}
		 cout<<a<<endl;

  }
	 return a;
}

