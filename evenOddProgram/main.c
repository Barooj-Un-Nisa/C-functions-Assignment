/*Program to find whether a number is even or odd using functions*/

#include<stdio.h>

//prototype of function
int EvenOdd(int);

int main(){

//declearing variables
	int n,result;

//takes user input
	printf("Enter any integer:");
	scanf("%d",&n);

//calling the function
	result = EvenOdd(n);
	
//user output
	if (result == 1){
		printf("Number is even");
	}
	else{
		printf("\nNumber is Odd");
	}
	
	return 0;
}
