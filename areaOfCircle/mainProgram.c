/*This program is to find the area of a circle using a function*/

#include<stdio.h>

//Prototype of the function
float area(int);

int main(){
	
//declearing the variables
	int radius;
	float result;

//Takes user input
	printf("Enter the radius of a circle:");
	scanf("%d",&radius);
	
//calling the area function
	result = area(radius);

//user output
	printf("Area of circle is %f",result);
	
	return 0;
}