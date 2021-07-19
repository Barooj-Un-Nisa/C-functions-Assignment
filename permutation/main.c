/*This program is to calculate P(n/r)*/

#include<stdio.h>

//prototype of factorial function
int fact(int);

void main(){
	
//declearation of functions
	int n,r;
	float result;
	
//Takes user input
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("Enter value of r:");
	scanf("%d",&r);
	
//Calling of function
	result = (float)fact(n) / fact(r);
	
//user output
	printf("P(%d,%d) = %f",n,r,result);
	
}