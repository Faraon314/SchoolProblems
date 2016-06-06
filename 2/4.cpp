
int proizved(){
	static int P;
	int i;
	cin>>i;
		if (i==0) return P;
	P*=i;
		return proizved();


}
