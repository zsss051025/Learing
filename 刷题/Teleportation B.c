#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int a,b,x,y,step1 = 0,step2 = 0;
	scanf("%d %d %d %d",&a,&b,&x,&y);
	
	if(abs(a-x) < abs(a-y)) {//��ȷ����Ҫ�ߴ����ţ����Ǹ�������Ϊ��� 
		step1 = abs(a-x) + abs(b-y);//��x���͵�y 
	} else {
		step1 = abs(a-y) + abs(b-x); 
	}
	
	//���ô����� 
	step2 = abs(a-b);
	if(step1>step2) {
		printf("%d",step2);
	} else {
		printf("%d",step1);
	}
	
	return 0;
	
}
