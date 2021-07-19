//factorial function

int fact(int num){
	int factorial = 1;
	
	for(int i = num; i > 0;i--){
		factorial = factorial * i;
	}
	return factorial;
}