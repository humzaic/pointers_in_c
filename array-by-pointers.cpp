//3.	Write a program in C to store n elements in an array and print the elements using pointer.
#include<stdio.h>
main()
{
	int a[5]={0,1,2,3,4};
	int *p = &a[4];
	for(int i = 0 ; i < 8 ; i ++)
	printf("%d ", *(p - i));
}

