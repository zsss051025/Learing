#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,saver1[100],saver2[100],max_time = 0; 

	scanf("%d",&n);

	//用1画出解雇一名救生员后时间覆盖线 
	for(int i=0;i<n;i++) {
		scanf("%d %d",&saver1[i],&saver2[i]);	
	}
	
	for(int i =0;i<n;i++) {//挨个解雇 
	
		int time[1001] = {0};
		
		for(int j = 0;j<n;j++) {//解雇后画时间线
			if(j == i) {
				continue;//解雇 
			}
			
			for(int k=saver1[j];k<saver2[j];k++) {
				time[k] = 1;
			}
			
		}
		int temp_max_time = 0;
		//画完线后统计覆盖时间
		for(int i = 0;i<=sizeof(time)/sizeof(int);i++) {
			if(time[i] == 1) {
				temp_max_time++;
			} 
		} 
		if(temp_max_time > max_time) {//解雇这个救生员后覆盖时间最长 
			max_time = temp_max_time;
		}
		

	}

	
	

	printf("%d",max_time);
	return 0;
}



