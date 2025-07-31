#include<stdio.h>

int main()
{
	int m,n;
	int count[10] = {0}; 
	scanf("%d %d",&m,&n);

	for(int i=m;i<n+1;i++) {
		int temp = i; 
		while(temp>0) {
			int num;
			num = temp - temp/10*10;//È¡³öÄ©Î²Êý×Ö
			temp = temp/10;
			count[num]++;
		}
	}
	
	for(int i=0;i<10;i++)
	{
		printf("%d ",count[i]);
	}
	
	return 0;
} 
