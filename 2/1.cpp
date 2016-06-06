int fun(int x){
int k=0;
int y;

if (x>=0) y=x; else y=-x;

do {
		if ((y%10)==1) k++;
		y=y/10;
} while ((y/10)>0);

if (y==1) k++;
return k;
}
