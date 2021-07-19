#include<stdio.h>

int fact(int);
int exponent(int);

int main(){

//Declearing variables
	int n;
	float sum = 0.0;
	
//takes user input
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++){
		sum = sum + exponent(i) / fact(i);
	}
	
//user output
	printf("Sum is %f",sum);
	
	
	
	return 0;
}