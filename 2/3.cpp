

void swap(double &x,double &y,double &z){
	double min=0;

	x<y?(x<z?min=x:min=z):(y<z?min=y:min=z);

	x>y?(x>z?x=min*min:z=min*min):(y>z?y=min*min:z=min*min);
}
