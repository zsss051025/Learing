#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double sum = 0;
	scanf("%d",&n);
	double a =  ( ( 1 + sqrt( 5 ) ) / 2 );
	double b =  ( ( 1 - sqrt( 5 ) ) / 2 );
	sum = ( pow( a , n) - pow ( b , n) ) / sqrt(5);
	printf("%.2lf",sum);
	
	return 0;
 } 
 

 
 
 
