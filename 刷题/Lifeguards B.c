#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,saver1[100],saver2[100],max_time;

	scanf("%d",&n);

	int time[1001] = {0};


	for(int i=0;i<n;i++) {
		scanf("%d %d",&saver1[i],&saver2[i]);	
		for(int j = saver1[i]-1;j<saver2[i];j++) {
			time[j] = 1;
		}
	}
	
	for(int i=0;i<sizeof(time)/sizeof(int);i++) {
		printf("%d ",time[i]);
	}

	int count=0;
	for(int i=0;i<sizeof(time)/sizeof(int);i++) {
		if(max_time<count) {
			max_time = count;
		} 
		if(time[i] == 1) {
			count++;
		} else {
			count = 0;
		}
	}
	
	
	

	
	return 0;
}



