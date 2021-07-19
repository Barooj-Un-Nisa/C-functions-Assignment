//Exponent function

int exponent(int a){
	int exp = 1;
	for(int i = 1;i <= a;i++){
		exp = exp * a;
	}
	return exp;
}