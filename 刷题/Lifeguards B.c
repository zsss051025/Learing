#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,saver1[100],saver2[100],max_time = 0; 

	scanf("%d",&n);

	//��1�������һ������Ա��ʱ�串���� 
	for(int i=0;i<n;i++) {
		scanf("%d %d",&saver1[i],&saver2[i]);	
	}
	
	for(int i =0;i<n;i++) {//������� 
	
		int time[1001] = {0};
		
		for(int j = 0;j<n;j++) {//��ͺ�ʱ����
			if(j == i) {
				continue;//��� 
			}
			
			for(int k=saver1[j];k<saver2[j];k++) {
				time[k] = 1;
			}
			
		}
		int temp_max_time = 0;
		//�����ߺ�ͳ�Ƹ���ʱ��
		for(int i = 0;i<=sizeof(time)/sizeof(int);i++) {
			if(time[i] == 1) {
				temp_max_time++;
			} 
		} 
		if(temp_max_time > max_time) {//����������Ա�󸲸�ʱ��� 
			max_time = temp_max_time;
		}
		

	}

	
	

	printf("%d",max_time);
	return 0;
}



