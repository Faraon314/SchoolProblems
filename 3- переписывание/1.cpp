
int function(char mas[20][30]){
	int k = 0;
	for (int i = 1; i < 19; i++){

		for (int j = 1; j < 29; j++){

			if (mas[i][j] == 'a'){

				if ((mas[i - 1][j] == 'b') && (mas[i + 1][j] == 'b') && (mas[i][j + 1] == 'b') && (mas[i][j - 1] == 'b')) k++;
			}
		}

	}


	return k;
}

