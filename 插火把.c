#include<stdio.h>

int main()
{
	int n,m,k,count=0;
	
	scanf("%d %d %d",&n,&m,&k);
	int arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }
    
	//�Ȳ���
	for(int i=0;i<m;i++) {
		int y,x;
		scanf("%d %d",&x,&y);
		
		for(int j=0;j<5;j++) {//���ŵĵ���
			if((y-j+1) < 0 || (y-j+1) > n) {
				continue;//Խ���� 
			} else {
				arr[x-1][y-j+1] = 1;  
			}
		}
		for(int j=0;j<5;j++) {//���ŵĵ��� 
			if((x-j+1) < 0 || (x-j+1) > n) {
				continue;//Խ���� 
			} else {
				arr[x-j+1][y-1] = 1;  
			}			
		}
		for(int j=0;j<3;j++) {//�������Խ��� 
			if((x-1) < 0 || (y-1) < 0 || (x+1)>n || (y+1)>n) {
				continue;
			} else {
				arr[x-j][y-j] = 1;
			}
		}
		for(int j=0;j<3;j++) {//�������Խ���
			if((x-2) < 0 || (y) < 0 || (x)>n || (y+2)>n) {
				continue;
			} else {
				arr[x-2+j][y-j] = 1;
			}
		}
	} 
	//����өʯ
	for(int i=0;i<k;i++) {
		int y,x;
		scanf("%d %d",&x,&y);
		for(int j=0;j<5;j++) {
			for(int l=0;l<5;l++) {
				if( (x-3+j) < 0 || (x-3+j) > n || (y-3+l) <0 || (y-3+l)>n ) {
					continue;
				} else {
					arr[x-3+j][y-3+l] =1;
				}
			}
		}	
	} 
	
	for(int i = 0; i < n; i++) {
	    for(int j = 0; j < n; j++) {
	        if(arr[i][j] == 0) {
	        	count++;
			}
	    }
    }
	printf("%d",count);
	
	return 0;
}

