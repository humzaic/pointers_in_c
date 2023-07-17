//6.	Call a function without using its name using pointers.
#include<stdio.h>
int sum(int x , int b  )
{
	return x+b;
}
main()
{
	int  (*ptr)(int,int);
	ptr = &sum;
	int result = (*ptr)(5,3);
	printf("Sum of two numbers is: %d",result);
}
