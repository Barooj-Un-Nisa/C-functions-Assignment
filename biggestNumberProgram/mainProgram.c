/*This program is to find biggest number between three numbers given by user*/

#include<stdio.h>

//Protype of function
int largest(int,int,int);

int main(){
	
//declearing variables
	int num1,num2,num3,biggest;

//Takes user input
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	printf("Enter the third number:");
	scanf("%d",&num3);

//calling the function
	biggest = largest(num1,num2,num3);
	
//user output
	printf("Largest number is %d",biggest);
	return 0;
}