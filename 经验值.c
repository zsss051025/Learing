#include<stdio.h>
#include<math.h>

void level_up(int *exp,int *now_state);

int main()
{
	int n,exp=0,now_state = 0;
	double now_life =10.0;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++) {
		int a;
		double x;
		scanf("%lf %d",&x,&a); 
		
		now_life -= x;
		if(now_life<=0) {//死了 
			break;
		} 
		if(now_life>10) {//加了血，血量超过上限 
			now_life =10;
		} 
		
		exp +=a;
		
		level_up(&exp,&now_state);
	}
	
	printf("%d %d",now_state,exp);
	return 0;
}


void level_up(int *exp, int *now_state) {
    while (*exp >= (int)pow(2, *now_state)) {  // 经验还够升级
        *exp -= (int)pow(2, *now_state);
        (*now_state)++;
    }
}
