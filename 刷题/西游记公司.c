#include <stdio.h>

int main(void)
{
	int hour1, min1, sec1,	//猪八戒的开始时间
	    hour2, min2, sec2;	//孙悟空的开始时间，即猪八戒的结束时间
	int time1,		//猪八戒的开始时间换算成秒
	    time2;		//猪八戒的结束时间换算成秒
	int num;		//每秒能偷的笔记本数
	long long n;		//猪八戒能偷沙和尚笔记本的个数

	scanf("%d:%d:%d", &hour1, &min1, &sec1);
	scanf("%d:%d:%d", &hour2, &min2, &sec2);
	scanf("%d", &num);

	time1 = hour1 * 3600 + min1 * 60 + sec1;
	time2 = hour2 * 3600 + min2 * 60 + sec2;

	n = (long long)num * (time2 - time1);

	printf("%lld\n", n);

	return 0;
}




