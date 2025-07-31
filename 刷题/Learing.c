#include<stdio.h>

void A(int *a);


int main()
{
	int a[5]={1,2,3,4,5};
	A(a); 
	return 0;
	
}


void A(int a[])
{
	printf("%d\n",*a);
	*a++;
	printf("%d\n",*a);
}

