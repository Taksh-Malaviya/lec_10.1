/*Q.1 Write a Program to find the cube of a given number using UDF.For example,
Input:
Enter any number: 5

Output:
Cube is: 125*/

#include<stdio.h>
void taksh(){

     int a,b;
     
	printf("enter value  ");
	scanf("%d",&a);
	
	b= a*a*a;
	printf("cube = %d",b);
}
main(){
	taksh();						
}
