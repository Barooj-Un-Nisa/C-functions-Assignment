/*program to convert time to minutes via functions*/

#include<stdio.h>

//prototype of functions
int timeToMinutes(int,int);

int main(){
	
//declearing variables
	int hours,minutes,result;

//Takes user input
	printf("Enter hours and minutes:");
	scanf("%d %d",&hours,&minutes);

//calls the function
	result = timeToMinutes(hours,minutes);
	
//user output
	printf("Total minutes is :%d",result);
	
	return 0;
}