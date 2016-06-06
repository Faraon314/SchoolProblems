

void binary_search(int mas[], int n, int x,int & ourindex,int & num ){
	int left = 0, right = n, mid = (left + right) / 2;
	int index=-1,k=0;

	while ((right - left) != 0)
	{
		k++;
		
		if (mas[mid] == x)
		{
			index = mid; break;
		}

		if (mas[mid] > x)
			right = mid;
		else
			left = mid+1;

		mid = (left + right) / 2;

	}
	
	ourindex = index;
		num = k;
}

