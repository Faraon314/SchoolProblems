
void sortOtb(int mas[], int n){
	int k = 0;

	for (int j = 0; j < n; j++){
		k = j;
		for (int i = j; i < n; i++){
			if (mas[k] >= mas[i]) k = i;
		}
		swap(mas[k], mas[j]);
	}

}

void function(int mas[]){
	sortOtb(mas, 25);
	
	sortOtb(mas + 25, 25);

	
	sortOtb(mas + 12, 25);

	
	}

