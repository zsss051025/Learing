#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x1,x2,y1,y2,x,y;
	scanf("%d %d",&x1,&x2);
	scanf("%d %d",&y1,&y2);
	
	if(abs(x1) >= abs(x2)) {
		x = x1;
	} else {
		x = x2;
	}
	if(abs(y1) >= abs(y2)) {
		y = y1;
	} else {
		y = y2;
	}
	if((long long)abs(x)*(long long)abs(y) <= 2147483647) {
		printf("int");
	}else {
		printf("long long int");
	}
	
	return 0;
 } 
