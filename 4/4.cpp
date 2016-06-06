
int ** create(int size){
	if (size%15!=0) {cout<<"Error"; return 0;} 
 int **p = new int *[size];
 
 for(int i=0;i<size;i+=15){
  for(int k = i; k <i+15; k++) p[k] = new int[15-(k-i)];
 }

  return p;
}

int &access(int **p,int i,int j){
	static int a=0;
	int n=i%15,k=j%15;

	if (n<=k) return p[i][(k-n)];
	else return a;

}
void destroy(int **matr,int size){
        for(int i=0;i<size;i++)
        {
            delete[] matr[i];
        }
        delete[] matr;
    }



