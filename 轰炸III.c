#include<stdio.h>

int main()
{
	int n,m,x,y;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int arrx[200],arry[200],YON[200],arr_count[200]//��ը���� 
	,arr_last[200];//��һ�κ�ը
	int arr_imp_x[200],arr_imp_y[y+1];
	
	for(int i=0;i<y;i++) {
		YON[i]=0;
		arr_count[i]=0;
		arr_last[i]=0;
	} 

	
	for(int i=0;i<x;i++) {//��¼��ը������ 
		scanf("%d %d %d %d",&arrx[2*i],&arry[2*i],&arrx[2*i+1],&arry[2*i+1]);
	} 
	for(int i=0;i<y;i++) {
		scanf("%d %d",&arr_imp_x[i],&arr_imp_y[i]);
	} 
	
	for(int i=0;i<y;i++) {//ÿ���ؼ��� ,arr_imp_x[i] and arr_imp_y[i]����ʾÿ���ؼ��� 
		for(int j=0;j<x;j++) {//�жϵ���ÿ�ֺ�ը���Ƿ񱻺�ը 
			if(arr_imp_x[i] >= arrx[2*j] && arr_imp_x[i] <= arrx[2*j+1] ) {//ȷ��x 
				if(arr_imp_y[i] >= arry[2*j] && arr_imp_y[i] <= arry[2*j+1]) {//ȷ��y 
					YON[i] = 1;
					arr_count[i]++;
					arr_last[i] = j+1;
				}
			}
		}
	}
	
	for(int i=0;i<y;i++) {//ÿ���ؼ��� ,arr_imp_x[i] and arr_imp_y[i]����ʾÿ���ؼ��� 
		if(YON[i] == 1) {
			printf("Y %d %d\n",arr_count[i],arr_last[i]);
		} else {
			printf("N\n");
		}
	}
	
	
	return 0;
 } 
