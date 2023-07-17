//2.	Write a program in C to add two numbers using pointers.
#include<stdio.h>
main()
{
	int a,b;
	int *x = &a;
	int *y = &b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("\nSum of two numbers is: %d", *x+*y);
}
