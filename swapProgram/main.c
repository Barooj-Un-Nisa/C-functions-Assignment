/*This program is for swapping two numbers using third variable via function */


#include<stdio.h>

//Prototype of swap function
void swap(int *, int *);

int main(){
	
//declearing variables
	int num1,num2,result;
	
//User input
	printf("Enter value one:");
	scanf("%d",&num1);
	printf("Enter value Two:");
	scanf("%d",&num2);
	
	printf("Numbers before swapping: %d %d \n",num1,num2);
	
//Calling of a function
	swap(&num1,&num2);
	
//User output
	printf("Numbers after swapping:%d %d",num1,num2);
return 0;
}

